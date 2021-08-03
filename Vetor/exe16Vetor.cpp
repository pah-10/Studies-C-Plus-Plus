#include <iostream>
using namespace std;
int main() {
  float a[5];
  int cod;

  for(int i = 0; i < 5; i++){
    cout<<"Digite um número"<<endl;
    cin>>a[i];
  }

  cout<<"Insira o código"<<endl;
  cin>>cod;

  switch (cod){
    case 0:
      return 0;
    break;

    case 1:
      cout<<"=========================="<<endl;
      cout<<"Valores armazenados em ordem direta:"<<endl;
      for(int j = 0; j < 5; j++){
        if(j != 4){
          cout<<a[j]<<" - ";
        } else{
          cout<<a[j]<<endl;
        }
      }
    break;

    case 2:
    cout<<"=========================="<<endl;
      cout<<"Valores armazenados em ordem inversa:"<<endl;
      for(int j = 4; j >= 0; j--){
        if(j != 0){
          cout<<a[j]<<" - ";
        } else{
          cout<<a[j]<<endl;
        }
      }
    break;

    default:
      cout<<"=========================="<<endl;
      cout<<"Código inválido\nTente novamente";
  }

  return 0;
}