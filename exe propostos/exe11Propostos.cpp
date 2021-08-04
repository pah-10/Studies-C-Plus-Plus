//Exercicio 11 dos exercícios propostos
//Programa que recebe o salário de um funcionário e calcula e mostra o valor do aumento e do novo salário (tabela)

#include <iostream>
using namespace std;
int main() {
  float salario;

  cout<<"Digite o valor do seu salário"<<endl;
  cin>>salario;

  if (salario <= 300){
    cout<<"Seu salário terá um aumento de "<< (salario*15)/100<< " reais e será igual a "<<salario *1.15<<" reais";
  } else if (salario > 300 && salario <= 600){
    cout<<"Seu salário terá um aumento de "<< (salario*10)/100<< " reais e será igual a "<<salario *1.10<<" reais";
  } else if (salario > 600 && salario <= 900){
    cout<<"Seu salário terá um aumento de "<< (salario*5)/100<< " reais e será igual a "<<salario *1.05<<" reais";
  } else{
    cout<<"Seu salário terá um aumento de 0 reais e permanecerá igual a "<<salario<<" reais";
  }
  return 0;
}