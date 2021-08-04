//Exercicio 23 dos exercicios propostos
//Programa que recebe o código e a quantidade de um produto e calcule o preço de cada unidade, o preço total da nota, o valor de desconto e o preço final com o desconto

#include <iostream>
using namespace std;
int main() {
  float cod, qtd, nota;

  cout<<"Digite o código do produto"<< endl;
  cin>>cod;
  cout<<"Digite a quantidade de produtos"<< endl;
  cin>>qtd;

  if (cod <= 10) {
    cout<<"O preço unitário do produto é R$ 10,00"<<endl;
    nota= qtd*10;
    cout<<"O valor total da nota é "<<nota<<" reais"<<endl;
  } else if (cod > 10 && qtd <= 20){
    cout<<"O preço unitário do produto é R$ 15,00"<<endl;
    nota= qtd*15;
    cout<<"O valor total da nota é "<<nota<<" reais"<<endl;
  } else if (cod > 20 && qtd <= 30){
    cout<<"O preço unitário do produto é R$ 20,00"<<endl;
    nota= qtd*20;
    cout<<"O valor total da nota é "<<nota<<" reais"<<endl;
  } else {
    cout<<"O preço unitário do produto é R$ 30,00"<<endl;
    nota= qtd*30;
    cout<<"O valor total da nota é "<<nota<<" reais"<<endl;
  }

  if (nota <= 250) {
    cout<<"O desconta será de 5%"<<endl;
    cout<<"O valor da nota com o desconto é "<< nota-(nota*0.05)<<" reais"<<endl;
  } else if (cod > 250 && qtd <= 500){
    cout<<"O desconta será de 10%"<<endl;
    cout<<"O valor da nota com o desconto é "<< nota-(nota*0.1)<<" reais"<<endl;
  } else {
    cout<<"O desconta será de 15%"<<endl;
    cout<<"O valor da nota com o desconto é "<< nota-(nota*0.15)<<" reais"<<endl;
  }  
  return 0;
}