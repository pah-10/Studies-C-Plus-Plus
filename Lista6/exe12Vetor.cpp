#include <iostream>
using namespace std;
int main() {
  float a[5], soma = 0, maior = 0, menor = 0;

  for(int i = 0; i < 5; i++){
    cout<<"Digite um número"<<endl;
    cin>>a[i];

    if(i == 0){
      maior = a[i];
      menor = a[i];
    } else if(a[i] > maior){
      maior = a[i];
    } else if(a[i] < menor){
      menor = a[i];
    }

    soma += a[i];
  } 

  cout<<"=================================="<<endl;
  cout<<"Valores armazenados no vetor:"<<endl;
  for(int j = 0; j <= 4; j++){

    if(j != 4){
      cout<<a[j]<<", ";
    } else{
      cout<<a[j]<<"."<<endl;
    }
  }

  cout<<"Média dos valores: "<<soma/5<<endl;
  cout<<"Maior valor: "<<maior<<endl;
  cout<<"Menor valor: "<<menor;
  
  return 0;
}