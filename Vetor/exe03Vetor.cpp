#include <iostream>
#define qtd 10
using namespace std;
int main() {
  float a[qtd], b[qtd];

  for (int i = 0; i < qtd; i++){
    cout<<"Digite um número real"<<endl;
    cin>>a[i];
  
    for(int j = 0; j < qtd; j++){
      b[j] = a[j] * a[j]; 
    }
  }

  cout<<"==============================="<<endl;

  cout<<"Conjunto dos números reais:"<<endl;
  for(int k = 0; k < qtd; k++){
    if(k != 9){
      cout<<a[k]<<", ";
    } else {
      cout<<a[k]<<"."<<endl;
    }
  }
  
  cout<<"Conjunto do quadrado do conjunto dos números reais:"<<endl;
  for(int l = 0; l < qtd; l++){
    if(l != 9){
      cout<<b[l]<<", ";
    } else {
      cout<<b[l]<<"."<<endl;
    }
  }

  return 0;
}