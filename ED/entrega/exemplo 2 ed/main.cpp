#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

#include "Fila.cpp"

//Paola Capita, 3 Semestre de 2021/1
//Prova 1 - Professor Mateus Tarcinalli Machado
//Pilha de impressao

int main() {
	int y, auxPid;
    int folhas,totalFolhas, op;
    char papel,sair;
	string nomme, saida;
	Fila minhaFila;

	do{
        system("cls");
        cout<<"\n\tFILA DE IMPRESSAO\n\n";
        cout<<"1 -> inserir doc para impresao\n2 -> remover doc da impresao\n3 -> listar docs para impresao\n4 -> inserir numero de folhas para impresao\n5 -> ver quatidade de folhas para impresao\n\n";
        cin>>op;

        switch(op){
            case 1:
                cout<<"\n\t INSERE FILA\n";

                cout<<"\nInsira o nome do arquivo:\n";
                getline(cin >> ws, nomme);

                cout<<"\nInsira a quantidade de folhas do arquivo:\n";
                cin>>folhas;

                if(minhaFila.inserir(nomme, folhas)){
                    cout<<"\n\n Documento inserido na fila de impressao\n\n";
                }else{
                    cout<<"\n\n ERRO, SEM PAPEL PARA FAZER A IMPRESSAO\n\n";
                }
            break;

            case 2:
                cout<<"\n\t REMOVE FILA\n";

                if (minhaFila.removerFolhas(folhas)){
                    if(minhaFila.remover(auxPid, nomme, folhas)){
                        cout<<"\n Removendo: <"<<auxPid<<"> - <"<<nomme<<"> - <"<<folhas<<">\n\n";
                    } else {
                        cout<<"\nERRO, LISTA DE IMPRESSAO VAZIA\n\n";
                    }
                }else{
                    cout<<"\nERRO, HA POUCAS FOLHAS PARA IMPRIMIR O DOC OU LISTA DE IMPRESSAO VAZIA\n\n";
                }
            break;

            case 3:
                cout<<"\n\t LISTANDO FILA\n";

                if (!minhaFila.vazia()){
                    saida = minhaFila.listar();
                    cout<<"\n"<<saida<<"\n\n";
                }else{
                    cout<<"\nERRO, LISTA DE IMPRESSAO VAZIA\n\n";
                }
            break;

            case 4:
                cout<<"\n\t INSERIR FOLHAS\n";

                cout<<"\nInforme a quantidade de folhas a serem inseridas:\n";
                cin>>totalFolhas;

                minhaFila.inserirFolhas(totalFolhas);

                cout<<"\n\n"<<totalFolhas<<" folhas inseridas\n\n";
            break;

            case 5:
                cout<<"\n\t TOTAL DE FOLHAS\n";

                totalFolhas = minhaFila.listarFolhas();
                cout<<"\nExistem "<<totalFolhas<<" folhas prontas para impressao\n\n";
            break;

            default:
                cout<<"\n\t OPCAO ERRADA\n\n";
            break;
        }

        cout<<"\n\n Deseja sair? (S/N)\n";
        cin>>sair;

    }while(sair != 's' && sair != 'S');

    return 0;
}
