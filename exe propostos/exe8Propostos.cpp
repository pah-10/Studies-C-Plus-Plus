//Exercício 8 dos exercícios propostos
//Programa que calcula o reajuste salárial de acordo com a tabela

#include <iostream>
using namespace std;
int main() {
  float salario;

  cout<<"Digite o valor do seu salário"<<endl;
  cin>>salario;

  if (salario > 300) {
    cout<<"Seu salário foi reajustado para "<<salario*1.15;
  } else {
    cout<<"Seu salário foi reajustado para R$"<<salario*1.35;
  }
  return 0;
}