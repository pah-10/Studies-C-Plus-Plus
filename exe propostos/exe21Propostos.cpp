//Exercicio 21 dos exercicios propostos
//Programa que recebe o pre�o e o c�digo de um produto e mostra a sua precedencia

#include <iostream>
using namespace std;
int main() {
  int preco, cod;

  cout<<"Digite o pre�o do produto"<<endl;
  cin>>preco;
  cout<<"Agora digite o c�digo de origem do produto"<<endl;
  cin>>cod;

  if(cod == 1){
    cout<<"Sul";
  } else if(cod == 2){
    cout<<"Norte";
  } else if(cod == 3){
    cout<<"Leste";
  } else if(cod == 4){
    cout<<"Oeste";
  } else if((cod == 5 || cod == 6) || (cod >= 21 && cod <= 30)){
    cout<<"Nordeste";
  } else if(cod >= 7 && cod <= 9){
    cout<<"Sudeste";
  } else if(cod >= 10 && cod <= 20){
    cout<<"Centro-oeste";
  } else {
    cout<<"ERROR, c�digo inexistente";
  }
  return 0;
}