#include <iostream>

using namespace std;

//Paola Capita, 3 Semestre de 2021/1
//Prova 1 - Professor Mateus Tarcinalli Machado
//Pilha de impressao

class Fila {
  private:
    struct elemento {
      int pid;
      string nome;
      int qtdFolhas;
      elemento *proximoElemento;
    };
    typedef elemento *PonteiroElemento;
    PonteiroElemento inicio;
    PonteiroElemento fim;
    int contPid = 1;
    int contFolha = 0;
  public:
    Fila();
    bool vazia();
    bool cheia();
    bool inserir(string auxNome, int auxQtdFolhas);
    bool remover(int &auxPid, string &auxNome, int &auxQtdFolhas);
    string listar();
    int listarFolhas();
    bool inserirFolhas(int auxQtdFolhas);
    bool removerFolhas(int auxQtdFolhas);
    bool imprimir();
};
