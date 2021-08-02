//Exercicio 7 lista 3
#include <iostream>
using namespace std;
int main() {
  float valor,valorJ, estado, MG, SP, MS, RJ;

  cout<<"Qual o valor do produto?"<<endl;
  cin>>valor;
  cout<<"Qual a sigla so seu estado?"<<endl;
  cin>>estado;
  

  if(estado == MG){
    valorJ = valor*1.07;
  }
  if(estado == SP){
    valorJ = valor*1.12;
    cout<<"o valor do produto com juros é "<<valorJ;
  }
  if (estado == MS){
    valorJ= valor*1.08;
    cout<<"o valor do produto com juros é "<<valorJ;
  }
  if (estado == RJ){
    valorJ = valor*1.15;
    cout<<"o valor do produto com juros é "<<valorJ;
  } else{
    cout<<"ERRO, insira outro estado";
  
  }
}