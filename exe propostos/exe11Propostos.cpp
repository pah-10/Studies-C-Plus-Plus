//Exercicio 11 dos exerc�cios propostos
//Programa que recebe o sal�rio de um funcion�rio e calcula e mostra o valor do aumento e do novo sal�rio (tabela)

#include <iostream>
using namespace std;
int main() {
  float salario;

  cout<<"Digite o valor do seu sal�rio"<<endl;
  cin>>salario;

  if (salario <= 300){
    cout<<"Seu sal�rio ter� um aumento de "<< (salario*15)/100<< " reais e ser� igual a "<<salario *1.15<<" reais";
  } else if (salario > 300 && salario <= 600){
    cout<<"Seu sal�rio ter� um aumento de "<< (salario*10)/100<< " reais e ser� igual a "<<salario *1.10<<" reais";
  } else if (salario > 600 && salario <= 900){
    cout<<"Seu sal�rio ter� um aumento de "<< (salario*5)/100<< " reais e ser� igual a "<<salario *1.05<<" reais";
  } else{
    cout<<"Seu sal�rio ter� um aumento de 0 reais e permanecer� igual a "<<salario<<" reais";
  }
  return 0;
}