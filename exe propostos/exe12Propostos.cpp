//Exerc�cio 12 dos exerc�cios propostos
//Programa que recebe o sal�rio de um funcion�rio, calcula e mostra o valor a receber (valor a receber � composto pelo salario acrescido de gratifica��o e descontado)

#include <iostream>
using namespace std;
int main() {
  float salario;

  cout<<"Informe o valor do seu sal�rio"<<endl;
  cin>>salario;

  if (salario <= 350) {
    cout<<"O valor a ser recebido � "<<salario+100-(salario*0.07)<<" reais";
  } else if (salario > 350 && salario <= 600) {
    cout<<"O valor a ser recebido � "<<salario+75-(salario*0.07)<<" reais";
  } else if (salario > 600 && salario <= 900) {
    cout<<"O valor a ser recebido � "<<salario+50-(salario*0.07)<<" reais";
  } else {
    cout<<"O valor a ser recebido � "<<salario+35-(salario*0.07)<<" reais";
  }
  return 0;
}