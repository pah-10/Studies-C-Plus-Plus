//Exercicio 15 dos exercicios propostos
//Programa que recebe o tipo de investimento, calcula e mostra o valor 

#include <iostream>
using namespace std;
int main() {
  int tipo, valor;

  cout<<"Digite 1 para acessar a Poupança"<<endl;
  cout<<"Digite 2 para acessar os Fundos de renda fixa"<<endl;
  cin>>tipo;

  cout<<"Digite o valor de investimento"<<endl; 
  cin>>valor;

  switch (tipo) {
    case 1: 
      cout<<"O valor de investimento com o rendimento mensal de 3% é "<<valor*1.03;
    break;

    case 2: 
      cout<<"O valor de investimento com o rendimento mensal de 4% é "<<valor*1.04;
    break;

    default:
    cout<<"ERROR, Tente Novamente";
    break;
  }
  return 0;
}