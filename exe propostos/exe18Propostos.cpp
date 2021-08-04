//Exercicio 18 dos propostos
//Programa que indentifica se uma pessoa é maior de idade ou não

#include <iostream>
using namespace std;
int main() {
  int idade;

  cout<<"Digite a sua idade"<<endl;
  cin>>idade;

  if (idade >= 18) {
    cout<<"Você já possui maioridade";
  } else {
    cout<<"Você ainda não possui maioridade";
  }
  return 0;
}