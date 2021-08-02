//Exercicio 13 lista 3
#include <iostream>
using namespace std;
int main() {
  float vreais, prestD, valorPres;

  cout<<"Qual o valor total em reais?"<<endl;
  cin>>vreais;
  cout<<"Qual o número de prestações desejadas? (Minímo 12 prestações)"<< endl;
  cin>>prestD;
  //

  if(prestD >= 24){
    vreais= vreais + (vreais*10/100);
  }
  if(prestD >= 36){
    vreais= vreais +(vreais*15/100);
  }

  valorPres=vreais/prestD;

  cout<<"O valor de " <<prestD<<" prestações de um total de  "<<vreais<< " reais é " <<valorPres;

  return 0;
}