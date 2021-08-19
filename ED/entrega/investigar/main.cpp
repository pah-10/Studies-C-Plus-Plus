#include <iostream>
#include <cstdlib>
#include <string>
#include "Fila.cpp"

using namespace std;

//  Implemente um programa que implemente uma fila de impressão.
//  Para cada arquivo a ser impresso devem ser armazenados:
//  - id sequencial da impressão (começando em 1)
//  - nome do arquivo
//  - quantidade de folhas
//  Exceto o id sequencial, as outras informações devem ser digitadas pelo
//  usuário.

//O programa também deve realizar um controle
//  da quantidade de papel disponível na impressora, permitindo que o usuário
//  realize a “inserção” de mais papel. Antes de inserir um novo documento na
//  fila, o programa deve verificar se há papel suficiente na impressora para
//  realizar a impressão.

//Se não houver papel suficiente, o programa não deve
//  aceitar a impressão. Desenvolva métodos que:
//    a.	Permita inserir um arquivo na fila de impressão (retornar falso caso não haja papel);
//    b.	Remova um arquivo da fila da impressão (imprimir);
//    c.	Liste os arquivos da fila de impressão;
//    d.	Permita inserir mais folhas na impressora;
//    e.	Retorne o total de folhas disponíveis na impressora

int main() {
    string nomeA, reton;
    char sair;
    int op, folhas;
    Fila principal;

    do{
        system("cls");

        cout<<"1 -> inserir doc para impresao\n2 -> remover doc da impresao\n3 -> listar docs para impresao\n4 -> inserir folhas para impresao\n5 -> quatidade de folhas para impresao\n\n";
        cin>>op;

        switch(op){
            case 1: //inserir
                cout<<"\nINSERE FILA\n";
                cout<<"\n\nInsira o nome do arquivo\n\n";
                getline(cin >> ws, nomeA);

                cout<<nomeA;

                cout<<"\n\nInsira a quantidade de folhas do arquivo\n\n";
                cin>>folhas;

                principal.inserir(folhas, nomeA);

            break;

            case 2: //remover
            break;

            case 3: //listar
                cout<<"\nFILA\n";
                reton = principal.listar();
                cout<<reton<<endl;
            break;

            case 4: /*inserir folha
                cout<<"\n\nInsira a quantidade de folhas do arquivo\n\n";
                cin>>folhas;*/
            break;

            case 5: //qtd folha
            break;

            default:
                cout<<"OPCAO ERRADA";
            break;
        }

        cout<<"Deseja sair? (s/n)\n";
        cin>>sair;

    }while(sair != 's' && sair != 'S');

    return 0;
}
