#include <iostream>
using namespace std;
int main() {
  int a[10], num;

  for(int i = 0; i < 10; i++){
    cout<<"Digite um n�mero para ser armazenado"<<endl;
    cin>>a[i];
  }

  cout<<"Digite um n�mero inteiro"<<endl;
  cin>>num;

  //verifica��o do n�mero
  if(num == 0){
    cout<<"==========================================="<<endl;
    cout<<"O n�mero 0 � multiplo de qualquer n�mero."<<endl;
      
  } else{
    cout<<"==========================================="<<endl;
    cout<<"N�meros multiplos de "<<num<<":"<<endl;
    for(int j = 0; j < 10; j++){
        
      //para um n�mero X ser multiplo de um n�mero Y deve-se dividir o n�mero X por Y. Se o resultado for inteiro, o n�mero X � multiplo de Y 
        if(a[j] % num == 0){
          cout<<a[j]<<endl;;
        } 
      }
  }

  return 0;
}