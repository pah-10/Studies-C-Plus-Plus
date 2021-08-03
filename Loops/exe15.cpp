#include <iostream>
using namespace std;
int main() {
  int qtdTrans, numConta;
  float balanco, taxa, valorTrans, saldo = 0;
  string cod;

  cout<<"Qual o valor do balanço minímo diário: "<<endl;
  cin>>balanco;
  cout<<"Quantas transações serão feitas? "<<endl;
  cin>>qtdTrans;
  cout<<"Informe a taxa de serviço: "<<endl;
  cin>>taxa;

  while(qtdTrans != 0){
    cout<<"Informe o número da conta: "<<endl;
    cin>>numConta;
    cout<<"Qual o valor da transação: "<<endl;
    cin>>valorTrans;
    cout<<"Que operação será realizada?"<<endl;
    cin>>cod;

    if(cod == "depósito" || cod == "Depósito" || cod == "D" || cod == "d"){
      saldo += valorTrans;
    } else if(cod == "retirada" || cod == "Retirada" || cod == "R" || cod == "r"){
      saldo -= valorTrans;
    }

    if(saldo < balanco){
      saldo = saldo - saldo*taxa/100;
      cout<<"Conta "<<numConta<<": NÂO HÁ FUNDOS"<<endl;
    } else{
      cout<<"O saldo da conta "<<numConta<<" é: $"<<saldo<<endl;
    }

    qtdTrans -= 1;
  }

  return 0;
}