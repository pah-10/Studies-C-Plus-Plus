//Exercicio 18 dos propostos
//Programa que indentifica se uma pessoa � maior de idade ou n�o

#include <iostream>
using namespace std;
int main() {
  int idade;

  cout<<"Digite a sua idade"<<endl;
  cin>>idade;

  if (idade >= 18) {
    cout<<"Voc� j� possui maioridade";
  } else {
    cout<<"Voc� ainda n�o possui maioridade";
  }
  return 0;
}