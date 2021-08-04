//Exercicio 20 dos exercicios propostos
//Programa que recebe a idade de um nadador e mostra sua categoria

#include <iostream>
using namespace std;
int main() {
  int idade;

  cout<<"Informe a sua idade"<<endl;
  cin>>idade;

  if (idade <= 7) {
    cout<<"Infantil";
  } else if (idade >=8 && idade <=10) {
    cout<<"Juvenil";
  } else if (idade >=11 && idade <=15) {
    cout<<"Adolescente";
  } else if (idade >=16 && idade <=30) {
    cout<<"Adulto";
  } else {
    cout<<"Sênior";
  }
  return 0;
}