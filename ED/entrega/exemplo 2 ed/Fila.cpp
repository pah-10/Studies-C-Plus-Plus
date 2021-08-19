#include "Fila.h"

//Paola Capita, 3 Semestre de 2021/1
//Prova 1 - Professor Mateus Tarcinalli Machado
//Pilha de impressao

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

bool Fila::inserir(string auxNome, int auxQtdFolhas) {
    // Inserir um arquivo na fila de impressão;
    // Altere o método inserir:

    if(contFolha == 0){
        return false;
    }

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

    Fila auxFila;
	int auxPid, auxQtdFolhas, auxtotalFolha;
	string auxNome, output = "";

	if (vazia())
        return output;

    auxtotalFolha = listarFolhas();

    auxFila.inserirFolhas(auxtotalFolha);

	while (remover(auxPid, auxNome, auxQtdFolhas)) {
		output = output + "<" + to_string(auxPid) + "> - <" + auxNome + "> - <" + to_string(auxQtdFolhas) + ">\n";
		auxFila.inserir(auxNome, auxQtdFolhas);
	}

	contPid = 1;
	contFolha = 0;

	inserirFolhas(auxtotalFolha);

	while (auxFila.remover(auxPid, auxNome, auxQtdFolhas)) {
		inserir(auxNome, auxQtdFolhas);
	}

	return output;
}

bool Fila::inserirFolhas(int auxFolhas) {
    // Inserir mais folhas na impressora;
	// Seu código aqui

    contFolha = auxFolhas + contFolha;

    return true;
}

bool Fila::removerFolhas(int auxFolhas) {

    if(contFolha == 0){
        return false;
    }

    int auxtotalFolha = listarFolhas();
    int folhas = 0;

    folhas = auxtotalFolha - auxFolhas;

    if(folhas < 0){
        return false;
    }

    contFolha = folhas;

    return true;
}

int Fila::listarFolhas() {
    // Retorna o total de folhas disponíveis na impressora;
	// Seu código aqui

    return contFolha;
}
