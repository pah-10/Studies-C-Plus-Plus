#include <iostream>
using namespace std;
int main() {
  int qtdTrans, numConta;
  float balanco, taxa, valorTrans, saldo = 0;
  string cod;

  cout<<"Qual o valor do balan�o min�mo di�rio: "<<endl;
  cin>>balanco;
  cout<<"Quantas transa��es ser�o feitas? "<<endl;
  cin>>qtdTrans;
  cout<<"Informe a taxa de servi�o: "<<endl;
  cin>>taxa;

  while(qtdTrans != 0){
    cout<<"Informe o n�mero da conta: "<<endl;
    cin>>numConta;
    cout<<"Qual o valor da transa��o: "<<endl;
    cin>>valorTrans;
    cout<<"Que opera��o ser� realizada?"<<endl;
    cin>>cod;

    if(cod == "dep�sito" || cod == "Dep�sito" || cod == "D" || cod == "d"){
      saldo += valorTrans;
    } else if(cod == "retirada" || cod == "Retirada" || cod == "R" || cod == "r"){
      saldo -= valorTrans;
    }

    if(saldo < balanco){
      saldo = saldo - saldo*taxa/100;
      cout<<"Conta "<<numConta<<": N�O H� FUNDOS"<<endl;
    } else{
      cout<<"O saldo da conta "<<numConta<<" �: $"<<saldo<<endl;
    }

    qtdTrans -= 1;
  }

  return 0;
}