#include <iostream>
#define qtd 3
using namespace std;
int main() {
  float matriz[qtd][qtd]= {0}, soma = 0;

  for(int i = 0; i < qtd; i++){
    for(int j = 0; j < qtd; j++){
      cout<<"Digite um valor para a matriz"<<endl;
      cin>>matriz[i][j];
      if(i == j && j == i){
        soma += matriz[i][j];
      }
    }
  }

  cout<<"========================================================="<<endl;
  cout<<"A soma dos elementos da diagonal principal resulta em "<<soma;


  return 0;
}