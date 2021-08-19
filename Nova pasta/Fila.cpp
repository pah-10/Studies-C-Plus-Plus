#include <cstdlib>
#include <iostream>
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

    int x,y, contador = 0, auxVetor[contador];
	Fila auxFila;

	if (vazia()){
        return false;
    }

	while (remover(y)) {
		auxFila.inserir(y);
	}

	while (auxFila.remover(x)) {
		inserir(x);
		auxVetor[contador] = x;
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

	return retorno;
}

bool Fila::estaNaFila(int valor) {
	// retornar verdadeiro caso o valor x seja localizado na fila
	// seu código aqui:

	int x;
	Fila auxFila;

    while (remover(x)) {
        if(x == valor){
            return true;
        }

		auxFila.inserir(x);
	}

	while (auxFila.remover(x)) {
		inserir(x);
	}

	return false;
}

Fila Fila::interseccao(Fila auxFila) {
	// retornar objeto Fila contendo a intersecção com a lista atual
	// elementos em comum com as 2 listas
	// sem repetição de elementos
	// seu código aqui:

}

Fila Fila::uniao(Fila auxFila) {
	// retornar objeto Fila contendo a união com a lista atual
	// elementos das 2 listas
	// sem repetição de elementos
	// seu código aqui:



}
