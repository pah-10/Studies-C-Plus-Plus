#include <cstdlib>
#include <iostream>
#include <string>
#include "Fila.h"

using namespace std;

Fila::Fila() {
    inicio = NULL;
    fim = NULL;
}

bool Fila::vazia() {
    return (inicio == NULL);
}

bool Fila::cheia() {
    return false;
}

bool Fila::inserir(int x) {
    PonteiroElemento p;
    p = new elemento;
    p->valor = x;
    if (vazia()) {
        inicio = p;
        fim = p;
    } else {
        fim->proximoElemento = p;
        fim = p;
    }
    p->proximoElemento = NULL;
    return true;
}

bool Fila::remover(int &x) {
    PonteiroElemento p;
    if (vazia())
        return false;
    x = inicio->valor;
    p = inicio;
    inicio = inicio->proximoElemento;
    delete p;
    if (inicio == NULL)
        fim = NULL;
    return true;
}

bool Fila::primeiro(int &x) {
	// caso a lista esteja vazia retornar falso
	// retornar em x o valor do primeiro elemento da lista
	// seu código aqui:

	if (vazia()) {
        return false;
    }

    x = inicio->valor;
    return true;
}

bool Fila::ultimo(int &x) {
	// caso a lista esteja vazia retornar falso
	// retornar em x o valor do último elemento da lista
	// seu código aqui:

    if (vazia()) {
        return false;
    }

    x = fim->valor;
    return true;
}

bool Fila::esvaziar() {
	// caso a lista esteja vazia retornar falso
	// remover todos os elementos da lista
	// seu código aqui:

    int x;

    if (vazia()){
        return false;
    }

    while(!vazia()){
		remover(x);
    }

    return true;
}

int Fila::tamanho() {
	// retornar o tamanho da lista, 0 se estiver vazia
	// seu código aqui:

	int x, contador = 0;
	Fila auxFila;

    if (vazia()){
        return false;
    }

    while (remover(x)) {
		auxFila.inserir(x);
	}

	while (auxFila.remover(x)) {
		inserir(x);
		contador++;
	}

	return contador;
}

bool Fila::inverter() {
	// caso a lista esteja vazia retornar falso
	// inverter a ordem dos elementos da lista
	// seu código aqui:

    int x, contador = 0, i = 0;
	Fila auxFila;

	cout<<contador<<endl<<endl;
    cout<<i<<endl<<endl;

    if (vazia()){
        return false;
    }

    while (remover(x)) {
		auxFila.inserir(x);
		contador++;
	}

    int auxVetor[contador];

	while (auxFila.remover(x)) {
		inserir(x);
		auxVetor[contador - i] = x;
		i++;
	}

    cout<<contador<<endl<<endl;
    cout<<i<<endl<<endl;


    for(int i = contador-1; i >= 0; i--){
        cout<<auxVetor[i]<<endl;
	}

	return true;
}

string Fila::listar() {
	// retornar string com todos os elementos da lista separados por ;
	// exemplo: 1 ; 3 ; 5
	// string vazia se a lista estiver vazia
	// seu código aqui:

    int x;
	Fila auxFila;
	string retorno = "";

	while (remover(x)) {
		retorno = retorno + to_string(x) + " ; ";
		auxFila.inserir(x);
	}

	while (auxFila.remover(x)) {
		inserir(x);
	}

    //remove os 3 ultimos caracters
	retorno.resize(retorno.size() - 3);

	return retorno;
}

bool Fila::estaNaFila(int valor) {
	// retornar verdadeiro caso o valor x seja localizado na fila
	// seu código aqui:

    int y;
    bool esta = false;
	Fila auxFila;

    if (vazia()){
        return false;
    }

    while (remover(y)) {
        if(y == valor){
            esta = true;
		}
		auxFila.inserir(y);
	}

	while (auxFila.remover(y)) {
		inserir(y);
	}

	return esta;
}

Fila Fila::interseccao(Fila auxFila) {
	// retornar objeto Fila contendo a intersecção com a lista atual
	// elementos em comum com as 2 listas
	// sem repetição de elementos
	// seu código aqui:

    int y, contalor1 = 0, contador2 = 0;
	Fila secundaFila;
/*
    for(int i = 2; i <= 4; i++){
        auxFila.inserir(i);

        if (!vazia()) {
            cout << "O valor "<<i<<" foi inserido na fila \n";
        }
    }

    while (remover(y)) {
        if(y == valor){
            esta = true;
		}
		auxFila.inserir(y);
	}

	while (auxFila.remover(y)) {
		inserir(y);
	}*/

    return secundaFila;
}

Fila Fila::uniao(Fila auxFila) {
	// retornar objeto Fila contendo a união com a lista atual
	// elementos das 2 listas
	// sem repetição de elementos
	// seu código aqui:
	Fila secundaFila;

	return secundaFila;
}
