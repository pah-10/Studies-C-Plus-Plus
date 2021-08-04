//Exercicio 25 dos exercicios propostos
//Programa que calcula a gratificação de natal dos funcionarios (número de horas menos 2/3 vezes (o número de horas-falta))

#include <iostream>
using namespace std;
int main() {
  float horas, extras, faltas, horasT;

  cout<<"Informe o número de horas diárias"<<endl;
  cin>>horas;
  cout<<"Insira o número correspondente de horas extras"<<endl;
  cin>>extras;
  cout<<"Insira o número correspondente de horas de faltas"<<endl;
  cin>>faltas;

  horasT= (extras)-2/3*((horas-faltas));

  if (horasT > 2400){
    cout<<"Gratificação de R$ 500,00";
  } else if (horasT >= 1800 && horasT < 2400){
    cout<<"Gratificação de R$ 400,00";
  } else if (horasT >= 1200 && horasT < 1800){
    cout<<"Gratificação de R$ 300,00";
  } else if (horasT >= 600 && horasT < 1200){
    cout<<"Gratificação de R$ 200,00";
  } else {
    cout<<"Gratificação de R$ 100,00";
  }
  return 0;
}