#include <iostream>
#define qtd 4
using namespace std;
int main() {
  float matriz[qtd][qtd] = {0}, linha = 0, coluna = 0, maior = 0; 

  for(int i = 0; i < qtd; i++){
    for(int j = 0; j < qtd; j++) {
      cout<<"Digite um valor"<<endl;
      cin>>matriz[i][j];
      if(i == 0 && j == 0){
        maior = matriz[i][j]; 
        linha = i;
        coluna = j;
      } else if (maior < matriz[i][j]){
        linha = i;
        coluna = j;
      }
    }
  }

  for(int i = 0; i < qtd; i++){
    for(int j = 0; j < qtd; j++) {
      cout << matriz[i][j] << "\t";
    }
    cout<<endl;
  }

  cout<<endl<<"O maior valor da matriz está localizado na linha "<<linha<<" e na coluna "<<coluna<<endl;
  return 0;
}