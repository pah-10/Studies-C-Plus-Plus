#include <iostream>
using namespace std;
int main() {
  int a[10], num;

  for(int i = 0; i < 10; i++){
    cout<<"Digite um número para ser armazenado"<<endl;
    cin>>a[i];
  }

  cout<<"Digite um número inteiro"<<endl;
  cin>>num;

  //verificação do número
  if(num == 0){
    cout<<"==========================================="<<endl;
    cout<<"O número 0 é multiplo de qualquer número."<<endl;
      
  } else{
    cout<<"==========================================="<<endl;
    cout<<"Números multiplos de "<<num<<":"<<endl;
    for(int j = 0; j < 10; j++){
        
      //para um número X ser multiplo de um número Y deve-se dividir o número X por Y. Se o resultado for inteiro, o número X é multiplo de Y 
        if(a[j] % num == 0){
          cout<<a[j]<<endl;;
        } 
      }
  }

  return 0;
}