//Exercício 2 dos propostos
//Programa que calcula a média aritmética de duas notas e mostra se ficou de exame, foi aprovado ou reprovado

#include <iostream>
using namespace std;
int main() {
  float n1,n2,ma;

  cout<<"Digite a sua primeira nota"<<endl;
  cin>>n1;
  cout<<"Digite a sua segunda nota"<<endl;
  cin>>n2;

  ma=(n1+n2)/2;
  cout<<"Sua Média Aritmética é "<<ma<<endl;

  if(ma>=7){
    cout<<"Aprovado";
  } else if(ma<7 && ma>=4){
    cout<<"Exame";
  }else{
    cout<<"Reprovado";
  }
  
  return 0;
}