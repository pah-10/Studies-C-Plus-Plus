//Exercicio 16 dos Exercicios propostos
//Programa que recebe o preço atual de um produto e seu código, calcula e mostra o preço atual, o valor do desconto e o novo preço

#include <iostream>
using namespace std;
int main() {
  float precoA, cod;

  cout<<"Digite o preço atual do produto"<<endl;
  cin>>precoA;
  cout<<"Informe o código do produto"<<endl;
  cin>>cod;

  if (precoA <= 30) {
    cout<<"O preço atual do produto é "<<precoA<<endl<<"O produto não possui desconto.";
  } else if (precoA > 30 && precoA <= 100) {
    cout<<"O preço do produto é "<<precoA<<" reais"<<endl;
    cout<<"O produto recebe um desconto de 10% e passa a ter como novo preço "<<precoA-(precoA*10/100)<<" reais";
  } else {
    cout<<"O preço atual do produto é "<<precoA<<" reais"<<endl;
    cout<<"O produto recebe um desconto de 15% e passa a ter como novo preço "<<precoA-(precoA*15/100)<<" reais";
  }
  return 0;
}