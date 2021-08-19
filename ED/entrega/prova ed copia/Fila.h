#include <iostream>

using namespace std;

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
    int contPid;
    int contFolha;
  public:
    Fila();
    bool vazia();
    bool cheia();
    bool inserir(string auxNome, int auxQtdFolhas);
    bool remover(int &auxPid, string &auxNome, int &auxQtdFolhas);
    string listar();
    int listarFolhas();
    bool inserirFolhas(int auxQtdFolhas);
    bool imprimir();;
};
