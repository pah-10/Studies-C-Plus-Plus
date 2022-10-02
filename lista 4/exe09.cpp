#include <iostream>
using namespace std;
int main() {
  float numCriNasc = 0, numCriMortas = 0, mesesVida = 0, qtdMeninos = 0, qtd24 = 0;
  char sexo;

  cout<<"Quantas crianças nasceram durante o período? "<<endl;
  cin>>numCriNasc;

  while (sexo != 'V' && sexo != 'v'){
    cout<<"Qual era o sexo da criança morta? \n Digite F para feminino \n Digite M para masculino \n Digite V para sair"<<endl;
    cin>>sexo;
    
    if(sexo != 'V' && sexo != 'v'){
      cout<<"Durante quantos meses a criança viveu? "<<endl;
      cin>>mesesVida;

      //quantidade de meninos
      if(sexo == 'm' || sexo =='M'){
        qtdMeninos = qtdMeninos+ 1;
      }

      //24 ou menos meses de vida
      if(mesesVida <= 24){
        qtd24 = qtd24 + 1;
      }
      numCriMortas = numCriMortas + 1;
    }
  }

  cout<<endl;
  cout<<"Crianças mortas durante o período: "<<(numCriMortas*100)/numCriNasc<<"%"<<endl;
  cout<<"Óbitos do sexo masculino: " <<(qtdMeninos*100)/numCriNasc<<"%"<<endl;
  cout<<"Crianças que viveram 24 meses ou menos: "<<(qtd24*100)/numCriNasc<<"%"<<endl;

  return 0;
}