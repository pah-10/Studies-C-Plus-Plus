#include <iostream>
using namespace std;

class Fila {
    private:
        struct elemento {
            int id;
            int qtdFolhas;
            string nome;
            elemento *proximoElemento;
        };
        typedef elemento *PonteiroElemento;
        PonteiroElemento inicio;
        PonteiroElemento fim;
        int contaId;
    public:
        Fila();
        bool vazia();
        bool cheia();
        // alterar
        bool inserir(int auxQtdFolhas, string auxNome);
        bool remover(int &auxId, int &auxQtdFolhas, string &auxNome);
        // implementar
        string listar();
        int listarFolhas();
        bool inserirFolhas(int auxQtdFolhas);
        bool imprimir();
};
