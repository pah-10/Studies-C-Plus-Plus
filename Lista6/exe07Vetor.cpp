#include <iostream>
#define qtd 10
using namespace std;
int main() {
  int a[qtd], maior = 0, posicao = 0;

  for(int i = 0; i < qtd; i++){
    cout<<"Digite um número inteiro"<<endl;
    cin>>a[i];

    if(i == 0){
      maior = a[i];
      posicao = i;
    } else if (a[i] > maior){
      maior = a[i];
      posicao = i;
    }
  }
  
  cout<<endl<<"=================="<<endl;
  cout<<"Valores do vetor"<<endl;
  for(int k = 0; k < qtd; k++){
    if(k != 9){
      cout<<a[k]<<", ";
    } else {
      cout<<a[k]<<"."<<endl;
    }
  }
  
  cout<<maior<<" é o maior valor do vetor, e está na posição "<<posicao;

  return 0;
}