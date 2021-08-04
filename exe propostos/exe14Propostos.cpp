//Exercicio 14 da lista de exercicios
//Programa que recebe o salario de um funcionario e calcula o novo salario

#include <iostream>
using namespace std;
int main() {
  float salario;

  cout<<"Digite o seu salário atual"<<endl;
  cin>>salario;

  if (salario <= 300) {
    cout<<"Seu salário teve um aumento de 50%, valendo agora "<<salario*1.5;
  } else if (salario > 300 && salario <= 500) {
    cout<<"Seu salário teve um aumento de 40%, valendo agora "<<salario*1.4;
  } else if (salario > 500 && salario <= 700) {
    cout<<"Seu salário teve um aumento de 30%, valendo agora "<<salario*1.3;
  } else if (salario > 700 && salario <= 800) {
    cout<<"Seu salário teve um aumento de 20%, valendo agora "<<salario*1.2;
  } else if (salario > 800 && salario <= 1000) {
    cout<<"Seu salário teve um aumento de 10%, valendo agora "<<salario*1.1;
  } else {
    cout<<"Seu salário teve um aumento de 5%, valendo agora "<<salario*1.05;
  }
  return 0;
}