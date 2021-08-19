#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

#include "Fila.h"

Fila::Fila() {
    inicio = NULL;
    fim = NULL;
    contPid = 1;
    contFolha = 0;
}

bool Fila::vazia() {
    return (inicio == NULL);
}

bool Fila::cheia() {
    return false;
}

bool Fila::inserir(string auxNome, int auxQtdFolhas) {
    // Inserir um arquivo na fila de impressão;
    // Altere o método inserir:

    PonteiroElemento p;
    p = new elemento;

    p->pid = contPid;
    contPid++;

    p->nome = auxNome;
    p->qtdFolhas = auxQtdFolhas;

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

bool Fila::remover(int &auxPid, string &auxNome, int &auxQtdFolhas) {
    // Remover um arquivo da fila da impressão (imprimir);
    // Altere o método remover:
    PonteiroElemento p;
    if (vazia())
        return false;

    auxPid = inicio->pid;
    auxNome = inicio->nome;
    auxQtdFolhas = inicio->qtdFolhas;

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

	int auxPid;
	string auxNome;
	int auxQtdFolhas;
	Fila auxFila;
	string output = "";

	if (vazia())
        return output;

	while (remover(auxPid, auxNome, auxQtdFolhas)) {
		output = output + "<" + to_string(auxPid) + "> - <" + auxNome + "> - <" + to_string(auxQtdFolhas) + ">\n";
		auxFila.inserir(auxNome, auxQtdFolhas);
	}
	contPid = 0;

	while (auxFila.remover(auxPid, auxNome, auxQtdFolhas)) {
		inserir(auxNome, auxQtdFolhas);
	}

	return output;
}

bool Fila::inserirFolhas(int auxFolhas) {
    // Inserir mais folhas na impressora;
	// Seu código aqui

    cout<<"\n\n\nTOTAL DE FOLhAS: "<<contFolha<<"\n\n\n";

    contFolha = auxFolhas + contFolha;

    cout<<"\n\n\nTOTAL DE FOLhAS: "<<contFolha<<"\n\n\n";

    return true;
}

int Fila::listarFolhas() {
    // Retorna o total de folhas disponíveis na impressora;
	// Seu código aqui

    return contFolha;
}

