//Exercicio 25 dos exercicios propostos
//Programa que calcula a gratifica��o de natal dos funcionarios (n�mero de horas menos 2/3 vezes (o n�mero de horas-falta))

#include <iostream>
using namespace std;
int main() {
  float horas, extras, faltas, horasT;

  cout<<"Informe o n�mero de horas di�rias"<<endl;
  cin>>horas;
  cout<<"Insira o n�mero correspondente de horas extras"<<endl;
  cin>>extras;
  cout<<"Insira o n�mero correspondente de horas de faltas"<<endl;
  cin>>faltas;

  horasT= (extras)-2/3*((horas-faltas));

  if (horasT > 2400){
    cout<<"Gratifica��o de R$ 500,00";
  } else if (horasT >= 1800 && horasT < 2400){
    cout<<"Gratifica��o de R$ 400,00";
  } else if (horasT >= 1200 && horasT < 1800){
    cout<<"Gratifica��o de R$ 300,00";
  } else if (horasT >= 600 && horasT < 1200){
    cout<<"Gratifica��o de R$ 200,00";
  } else {
    cout<<"Gratifica��o de R$ 100,00";
  }
  return 0;
}