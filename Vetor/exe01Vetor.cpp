#include <iostream>
#define qtd 10
using namespace std;
int main() {
  int num[10];

  for(int i = 0; i < qtd; i++){
    cout<<"Digite um número inteiro"<<endl;
    cin>>num[i];
  }

  cout<<"=============================="<<endl;
  for(int i = 0; i < qtd; i++){
    if(i != 9){
    cout<<num[i]<<", ";
    } else{
      cout<<num[i]<<"."<<endl;
    }
  }

  return 0;
}