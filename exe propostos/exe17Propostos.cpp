//Exercicio 17 dos exercicios propostos
//Programa que verifica se a senha fornecida � igual a 4531

#include <iostream>
using namespace std;
int main() {
  int senha;

  cout<<"Digite a senha"<<endl;
  cin>>senha;

  if (senha == 4531){
    cout<<"Acesso liberado";
  } else{
    cout<<"Senha inv�lida";
  }
  return 0;
}