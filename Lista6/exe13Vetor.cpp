#include <iostream>
using namespace std;
int main() {
  float a[5], soma = 0, maior = 0, menor = 0, maiorP = 0, menorP = 0;

  for(int i = 0; i < 5; i++){
    cout<<"Digite um número"<<endl;
    cin>>a[i];

    if(i == 0){
      maior = a[i];
      menor = a[i];
      maiorP = i;
      menorP = i;
    } else if(a[i] > maior){
      maior = a[i];
      maiorP = i;
    } else if(a[i] < menor){
      menor = a[i];
      menorP = i;
    }
  } 

  cout<<"===================="<<endl;
  cout<<"Posição do maior valor: "<<maiorP<<endl;
  cout<<"Posição do menor valor: "<<menorP;
  return 0;
}