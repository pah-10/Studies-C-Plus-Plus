#include <iostream>
#define qtd 10
using namespace std;
int main() {
  int a[qtd], maior = 0, posicao = 0;

  for(int i = 0; i < qtd; i++){
    cout<<"Digite um n�mero inteiro"<<endl;
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
  
  cout<<maior<<" � o maior valor do vetor, e est� na posi��o "<<posicao;

  return 0;
}