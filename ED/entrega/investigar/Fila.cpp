#include <cstdlib>
#include <iostream>
#include <string>
#include "Fila.h"

Fila::Fila() {
    inicio = NULL;
    fim = NULL;
    contaId = 1;
}

bool Fila::vazia() {
    return (inicio == NULL);
}

bool Fila::cheia() {
    return false;
}

bool Fila::inserir(int auxQtdFolhas, string auxNome) {
    // Inserir um arquivo na fila de impressão;
    // Altere o método inserir:
    PonteiroElemento p;
    p = new elemento;

    p->id = contaId;
    contaId++;


    p->qtdFolhas = auxQtdFolhas;
    p->nome = auxNome;

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

bool Fila::remover(int &auxId, int &auxQtdFolhas, string &auxNome) {
    // Remover um arquivo da fila da impressão (imprimir);
    // Altere o método remover:
    PonteiroElemento p;
    if (vazia())
        return false;

    auxId = inicio->id;
    auxQtdFolhas = p->qtdFolhas;
    auxNome = p->nome;

    p = inicio;
    inicio = inicio->proximoElemento;
    delete p;
    if (inicio == NULL)
        fim = NULL;
    return true;
}


string Fila::listar() {
	// Implementar listagem da fila de impressão;
    // Retornar string no formato:
	// <idImpressao1> - <nomeArquivo1> - <folhas1>\n
	// <idImpressao2> - <nomeArquivo2> - <folhas2>\n
	//
	// Seu código aqui

	Fila auxFila;
	string nm;
	string retorno = "";
	int i, fl;

	while(remover(i,fl,nm)){
        auxFila.inserir(fl,nm);
        retorno = retorno + to_string(i) + " ";
        retorno = retorno + nm + " ";
        retorno = retorno + to_string(fl) + " ";
	}

	while(auxFila.remover(i,fl,nm)){
        inserir(fl,nm);
	}

    return retorno;
}

/*
bool Fila::inserirFolhas(int auxFolhas) {
    // Inserir mais folhas na impressora;
	// Seu código aqui


    return true;
}

int Fila::listarFolhas() {
    // Retorna o total de folhas disponíveis na impressora;
	// Seu código aqui


}
*/
