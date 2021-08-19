#include <iostream>
#include "Fila.cpp"


//	Altere a classe que implementa a fila adicionando os seguintes m�todos:
//  a.	Um m�todo primeiro que deve retornar o primeiro elemento da fila;
//  b.	Um m�todo �ltimo que deve retornar o �ltimo elemento da fila;
//  c.	Um m�todo esvaziar que remova todos os elementos da fila;
//  d.	Um m�todo tamanho que retorne o tamanho atual da fila;
//  e.	Um m�todo inverter que inverta a ordem dos elementos atuais da fila;
//  f.	Um m�todo listar que retorne um vetor contendo todos os elementos da fila;
//  g.	Um m�todo que verifica se um dado valor se encontra na fila;
//  h.	Um m�todo que receba uma lista e retorne a intersec��o com essa lista;
//  i.	Um m�todo que receba uma lista e retorne a uni�o com essa lista;
//
// Implementar utilizando sempre somente os met�dos inserir e remover.


using namespace std;

int main() {
    Fila minhaFila, fila01, fila02;
    int x, y;
    string retorno;

    if (minhaFila.vazia()) {
        cout << "Esta vazia! \n\n\n";
    }

    if (minhaFila.esvaziar()) {
        cout << "Fila foi esvaziada? SIM \n\n\n";
    }else{
        cout<<"Fila foi esvaziada? NAO ela estava vazia \n\n\n";
    }

    for(int i = 1; i <= 3; i++){
        minhaFila.inserir(i);

        if (!minhaFila.vazia()) {
            cout << "O valor "<<i<<" foi inserido na fila \n";
        }
    }

    cout<<endl<<endl;

    if(minhaFila.primeiro(x)){
        cout << "Primeiro elemento: " << x << "\n\n\n";
    }else{
        cout<<"Fila vazia \n\n\n";
    }

    if(minhaFila.ultimo(x)){
        cout << "Ultimo elemento: " << x << "\n\n\n";
    }else{
        cout<<"Fila vazia \n\n\n";
    }

    cout<<"----Lista fila----\n";
    retorno = minhaFila.listar();
    cout<<retorno<<endl<<endl<<endl;


    /*
    minhaFila.remover(x);
    cout << "Esta vazia: " << x<<minhaFila.vazia() << "\n";
    minhaFila.remover(x);
    cout << "Esta vazia: " << x<<minhaFila.vazia() << "\n";
    minhaFila.remover(x);
    cout << "Esta vazia: " << x<<minhaFila.vazia() << "\n";
    minhaFila.remover(x);
    cout << "Esta vazia: " << x<<minhaFila.vazia() << "\n";

    //fila02 = minhaFila.interseccao(fila01);
    //cout << fila02.listar();*/

    minhaFila.esvaziar();
    cout << "Esvaziou? " <<minhaFila.esvaziar() << "\n";

    return 0;
}
