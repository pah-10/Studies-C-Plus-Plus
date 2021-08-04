//Exercicio 24 dos exercicios propostos
//Programa que recebe o preço, a categoria, a situação e calcule o valor do aumento, do imposto, o novo preço e a classificação

#include <iostream>
using namespace std;
int main() {
  float preco, sit, aum, imp, npreco;
  int cat, R, N;

  cout<<"Informe o preço"<<endl;
  cin>>preco;

  cout<<"Digite 1 para limpeza"<<endl;
  cout<<"Digite 2 para alimentação"<<endl;
  cout<<"Digite 3 para vestuário"<<endl;
  cin>>cat;

  cout<<"Digite R para produtos que precisam de refrigeração"<<endl;
  cout<<"Digite N para produtos que não precisam de refrigeração"<<endl;
  cin>>sit;

  switch (cat){
    case 1: 
      if(preco <= 25){
        aum=preco*1.05;
        cout<<"O preço terá um aumento de "<<aum<<endl;
      } else{
        aum=preco*1.12;
        cout<<"O preço terá um aumento de "<<aum<<endl;
      }
    break;

    case 2: 
      if(preco <= 25){
        aum=preco*1.08;
        cout<<"O preço terá um aumento de "<<aum<<endl;
      } else{
        aum=preco*1.15;
        cout<<"O preço terá um aumento de "<<aum<<endl;
      }
    break;

    case 3: 
      if(preco <= 25){
        aum=preco*1.1;
        cout<<"O preço terá um aumento de "<<aum<<endl;
      } else{
        aum=preco*1.18;
        cout<<"O preço terá um aumento de "<<aum<<endl;
      }
    break;
  }

  if (cat == 2 || sit == R){
    imp=preco*0.05;
    cout<<"O valor do imposto é "<<imp<<" reais"<<endl;
  } else {
    imp=preco*0.08;
    cout<<"O valor do imposto é "<<imp<<" reais"<<endl;
  }

  npreco = preco+aum-imp;
  cout<<"O novo preço do produto será "<<npreco<<" reais"<<endl; 

  if (npreco <= 50){
    cout<<"Barato";
  } else if (npreco >= 120){
    cout<<"Caro";
  } else{
    cout<<"Normal";
  }
  return 0;
}