//Exercicio 24 dos exercicios propostos
//Programa que recebe o pre�o, a categoria, a situa��o e calcule o valor do aumento, do imposto, o novo pre�o e a classifica��o

#include <iostream>
using namespace std;
int main() {
  float preco, sit, aum, imp, npreco;
  int cat, R, N;

  cout<<"Informe o pre�o"<<endl;
  cin>>preco;

  cout<<"Digite 1 para limpeza"<<endl;
  cout<<"Digite 2 para alimenta��o"<<endl;
  cout<<"Digite 3 para vestu�rio"<<endl;
  cin>>cat;

  cout<<"Digite R para produtos que precisam de refrigera��o"<<endl;
  cout<<"Digite N para produtos que n�o precisam de refrigera��o"<<endl;
  cin>>sit;

  switch (cat){
    case 1: 
      if(preco <= 25){
        aum=preco*1.05;
        cout<<"O pre�o ter� um aumento de "<<aum<<endl;
      } else{
        aum=preco*1.12;
        cout<<"O pre�o ter� um aumento de "<<aum<<endl;
      }
    break;

    case 2: 
      if(preco <= 25){
        aum=preco*1.08;
        cout<<"O pre�o ter� um aumento de "<<aum<<endl;
      } else{
        aum=preco*1.15;
        cout<<"O pre�o ter� um aumento de "<<aum<<endl;
      }
    break;

    case 3: 
      if(preco <= 25){
        aum=preco*1.1;
        cout<<"O pre�o ter� um aumento de "<<aum<<endl;
      } else{
        aum=preco*1.18;
        cout<<"O pre�o ter� um aumento de "<<aum<<endl;
      }
    break;
  }

  if (cat == 2 || sit == R){
    imp=preco*0.05;
    cout<<"O valor do imposto � "<<imp<<" reais"<<endl;
  } else {
    imp=preco*0.08;
    cout<<"O valor do imposto � "<<imp<<" reais"<<endl;
  }

  npreco = preco+aum-imp;
  cout<<"O novo pre�o do produto ser� "<<npreco<<" reais"<<endl; 

  if (npreco <= 50){
    cout<<"Barato";
  } else if (npreco >= 120){
    cout<<"Caro";
  } else{
    cout<<"Normal";
  }
  return 0;
}