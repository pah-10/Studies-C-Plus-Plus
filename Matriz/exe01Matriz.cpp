#include <iostream>
#define qtd 4
using namespace std;
int main() {
  float matriz[qtd][qtd] = {0}, maior = 0, menor = 0; 

  for(int i = 0; i < qtd; i++){
    for(int j = 0; j < qtd; j++) {
      cout << "Digite um valor: "<<endl;
      cin >> matriz[i][j];
    }
  }

  cout<<"======================"<<endl;
  cout<<"N�meros maiores que 10:"<<endl<<endl;

  for(int i = 0; i < qtd; i++){
    for(int j = 0; j < qtd; j++) {
      if(matriz[i][j] > 10){
        cout<<""<<matriz[i][j]<<endl;
        maior++; 
      }
    }
  }

  if(maior != 0){
  cout<<endl<<"Existe "<<maior<<" n�meros maiores que 10"<<endl;
  }else{
    cout<<"N�O EXISTE N�MEROS MAIORES QUE 10."<<endl;
  }
  
  return 0;
}