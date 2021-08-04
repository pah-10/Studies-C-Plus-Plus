//Exercício 12 dos exercícios propostos
//Programa que recebe o salário de um funcionário, calcula e mostra o valor a receber (valor a receber é composto pelo salario acrescido de gratificação e descontado)

#include <iostream>
using namespace std;
int main() {
  float salario;

  cout<<"Informe o valor do seu salário"<<endl;
  cin>>salario;

  if (salario <= 350) {
    cout<<"O valor a ser recebido é "<<salario+100-(salario*0.07)<<" reais";
  } else if (salario > 350 && salario <= 600) {
    cout<<"O valor a ser recebido é "<<salario+75-(salario*0.07)<<" reais";
  } else if (salario > 600 && salario <= 900) {
    cout<<"O valor a ser recebido é "<<salario+50-(salario*0.07)<<" reais";
  } else {
    cout<<"O valor a ser recebido é "<<salario+35-(salario*0.07)<<" reais";
  }
  return 0;
}