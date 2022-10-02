#include <iostream>
using namespace std;
int main() {
  float a[10], maior = 0, menor = 0;

  for(int i = 0; i < 10; i++){
    cout<<"Digite um valor"<<endl;
    cin>>a[i];

    if(a[i] == 0){
      maior = a[i];
      menor = a[i];
    }else if(a[i] > maior){
      maior = a[i];
    } else if (a[i] < menor){
      menor = a[i];
    }
  }

  cout<<endl<<"Maior valor do vetor: "<<maior<<endl;
  cout<<"Menor valor do vetor: "<<menor<<endl;
  return 0;
}