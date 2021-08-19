#include <iostream>
#include "Fila.cpp"


//	Altere a classe que implementa a fila adicionando os seguintes métodos:
//  e.	Um método inverter que inverta a ordem dos elementos atuais da fila;
//  h.	Um método que receba uma lista e retorne a intersecção com essa lista;
//  i.	Um método que receba uma lista e retorne a união com essa lista;

using namespace std;

int main() {
    Fila minhaFila, fila01, fila02;
    int x, y, contador;
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

    cout<<"----Tamanho fila----\n";
    contador = minhaFila.tamanho();
    cout << "O tamanho da fila eh: " << contador << "\n\n\n";

    cout<<"----Esta na fila----\n";
    if(minhaFila.estaNaFila(5)){
        cout << "Esta na fila \n\n\n";
    }else{
        cout << "Nao esta na fila \n\n\n";
    }
	
	/*

    cout<<"----Interseccao----\n";
    fila02 = minhaFila.interseccao(fila01);
    cout << fila02.listar();

    cout<<"----Inverter fila----\n";
    if(minhaFila.inverter()){
        cout << "Fila foi invertida \n\n\n";
    }else{
        cout << "Nao foi invertida \n\n\n";
    } */

    /*
    minhaFila.remover(x);
    cout << "Esta vazia: " << x<<minhaFila.vazia() << "\n";
    */

    minhaFila.esvaziar();
    cout << "Esvaziou? " <<minhaFila.esvaziar() << "\n";

    return 0;
}
