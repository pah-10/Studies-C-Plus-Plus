#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

#include "Fila.cpp"

int main() {
	int y, auxPid;
    int folhas, op;
    char papel,sair;
	string nomme, saida;
	Fila minhaFila;

	do{
        system("cls");

        cout<<"1 -> inserir doc para impresao\n2 -> remover doc da impresao\n3 -> listar docs para impresao\n4 -> inserir folhas para impresao\n5 -> quatidade de folhas para impresao\n\n";
        cin>>op;

        switch(op){
            case 1:
                cout<<"\nINSERE FILA\n";

                cout<<"\n\nInsira o nome do arquivo\n\n";
                getline(cin >> ws, nomme);

                cout<<nomme;

                cout<<"\n\nInsira a quantidade de folhas do arquivo\n\n";
                cin>>folhas;

                if(minhaFila.inserir(nomme, folhas)){
                    cout<<"\n\nDocumento inserido na fila de impressao\n\n";
                }else{
                    cout<<"\n\nSem papel para imprimir\n";
                }

            break;

            case 2:
                cout<<"\nREMOVE FILA\n";

                if (minhaFila.remover(auxPid, nomme, folhas)){
                    cout<<"\n<"<<auxPid<<"> - <"<<nomme<<"> - <"<<folhas<<">\n\n";
                }else{
                    cout<<"\n\tVAZIA\n\n";
                }
            break;

            case 3:
                cout<<"\nLISTANDO FILA\n";

                if (!minhaFila.vazia()){
                    saida = minhaFila.listar();
                    cout<<saida<<endl<<endl;;
                }else{
                    cout<<"\n\tVAZIA\n\n";
                }
            break;

            case 4:
                cout<<"\nINSERIR FOLHAS\n";

                cout<<"\n\nInforme a quantidade de folhas a serem inseridas:\n\n";
                cin>>folhas;

                minhaFila.inserirFolhas(folhas);

                cout<<folhas<<" Inseridas"<<endl<<endl;;
            break;

            case 5:
                cout<<"\nTOTAL DE FOLHAS\n";

                folhas = minhaFila.listarFolhas();
                cout<<"\n\nExistem "<<folhas<<" ao total prontas para impressao\n\n";
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
