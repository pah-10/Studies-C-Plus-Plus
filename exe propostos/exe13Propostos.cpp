//Exercicio 13 dos exercicios propostos
//Programa que recebe o pre�o de um produto, calcula e mostra o novo pre�o e a classifica��o (tabela)

#include <iostream>
using namespace std;
int main() {
  float preco, novoP;

  cout<<"Digite o pre�o do produto"<<endl;
  cin>>preco;

  if (preco <= 50) {
    novoP= preco + (preco*0.05);
    cout<<"O novo pre�o do produto � "<<novoP<<endl;
  } else if (preco > 50 && preco <= 100) {
    novoP= preco + (preco*0.1);
    cout<<"O novo pre�o do produto � "<<novoP<<endl;
  } else {
    novoP= preco + (preco*0.15);
    cout<<"O novo pre�o do produto � "<<novoP<<endl;
  }

  if (novoP <= 80) {
    cout<<"Barato";
  } else if (novoP > 80 && novoP <= 120) {
    cout<<"Normal";
  } else if(novoP > 120 && novoP <= 200) {
    cout<<"Caro";
  } else {
    cout<<"Muito Caro";
  }
  return 0;
}