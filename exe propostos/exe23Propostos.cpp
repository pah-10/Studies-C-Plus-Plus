//Exercicio 23 dos exercicios propostos
//Programa que recebe o c�digo e a quantidade de um produto e calcule o pre�o de cada unidade, o pre�o total da nota, o valor de desconto e o pre�o final com o desconto

#include <iostream>
using namespace std;
int main() {
  float cod, qtd, nota;

  cout<<"Digite o c�digo do produto"<< endl;
  cin>>cod;
  cout<<"Digite a quantidade de produtos"<< endl;
  cin>>qtd;

  if (cod <= 10) {
    cout<<"O pre�o unit�rio do produto � R$ 10,00"<<endl;
    nota= qtd*10;
    cout<<"O valor total da nota � "<<nota<<" reais"<<endl;
  } else if (cod > 10 && qtd <= 20){
    cout<<"O pre�o unit�rio do produto � R$ 15,00"<<endl;
    nota= qtd*15;
    cout<<"O valor total da nota � "<<nota<<" reais"<<endl;
  } else if (cod > 20 && qtd <= 30){
    cout<<"O pre�o unit�rio do produto � R$ 20,00"<<endl;
    nota= qtd*20;
    cout<<"O valor total da nota � "<<nota<<" reais"<<endl;
  } else {
    cout<<"O pre�o unit�rio do produto � R$ 30,00"<<endl;
    nota= qtd*30;
    cout<<"O valor total da nota � "<<nota<<" reais"<<endl;
  }

  if (nota <= 250) {
    cout<<"O desconta ser� de 5%"<<endl;
    cout<<"O valor da nota com o desconto � "<< nota-(nota*0.05)<<" reais"<<endl;
  } else if (cod > 250 && qtd <= 500){
    cout<<"O desconta ser� de 10%"<<endl;
    cout<<"O valor da nota com o desconto � "<< nota-(nota*0.1)<<" reais"<<endl;
  } else {
    cout<<"O desconta ser� de 15%"<<endl;
    cout<<"O valor da nota com o desconto � "<< nota-(nota*0.15)<<" reais"<<endl;
  }  
  return 0;
}