#include <iostream>
using namespace std;
int main() {
  float numCriNasc = 0, numCriMortas = 0, mesesVida = 0, qtdMeninos = 0, qtd24 = 0;
  char sexo;

  cout<<"Quantas crian�as nasceram durante o per�odo? "<<endl;
  cin>>numCriNasc;

  while (sexo != 'V' && sexo != 'v'){
    cout<<"Qual era o sexo da crian�a morta? \n Digite F para feminino \n Digite M para masculino \n Digite V para sair"<<endl;
    cin>>sexo;
    
    if(sexo != 'V' && sexo != 'v'){
      cout<<"Durante quantos meses a crian�a viveu? "<<endl;
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
  cout<<"Crian�as mortas durante o per�odo: "<<(numCriMortas*100)/numCriNasc<<"%"<<endl;
  cout<<"�bitos do sexo masculino: " <<(qtdMeninos*100)/numCriNasc<<"%"<<endl;
  cout<<"Crian�as que viveram 24 meses ou menos: "<<(qtd24*100)/numCriNasc<<"%"<<endl;

  return 0;
}