//Exercicio 16 dos Exercicios propostos
//Programa que recebe o pre�o atual de um produto e seu c�digo, calcula e mostra o pre�o atual, o valor do desconto e o novo pre�o

#include <iostream>
using namespace std;
int main() {
  float precoA, cod;

  cout<<"Digite o pre�o atual do produto"<<endl;
  cin>>precoA;
  cout<<"Informe o c�digo do produto"<<endl;
  cin>>cod;

  if (precoA <= 30) {
    cout<<"O pre�o atual do produto � "<<precoA<<endl<<"O produto n�o possui desconto.";
  } else if (precoA > 30 && precoA <= 100) {
    cout<<"O pre�o do produto � "<<precoA<<" reais"<<endl;
    cout<<"O produto recebe um desconto de 10% e passa a ter como novo pre�o "<<precoA-(precoA*10/100)<<" reais";
  } else {
    cout<<"O pre�o atual do produto � "<<precoA<<" reais"<<endl;
    cout<<"O produto recebe um desconto de 15% e passa a ter como novo pre�o "<<precoA-(precoA*15/100)<<" reais";
  }
  return 0;
}