//Exerc�cio 8 dos exerc�cios propostos
//Programa que calcula o reajuste sal�rial de acordo com a tabela

#include <iostream>
using namespace std;
int main() {
  float salario;

  cout<<"Digite o valor do seu sal�rio"<<endl;
  cin>>salario;

  if (salario > 300) {
    cout<<"Seu sal�rio foi reajustado para "<<salario*1.15;
  } else {
    cout<<"Seu sal�rio foi reajustado para R$"<<salario*1.35;
  }
  return 0;
}