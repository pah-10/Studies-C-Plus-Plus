//exercicio 1 dos exercicios propostos
//Programa que calcula a m�dia aritm�tica de 4 notas e mostra se o aluno foi aprovado ou reprovado (m�dia 7)

#include <iostream>
using namespace std;
int main() {
  float n1,n2,n3,n4,ma;

  cout<<"Digite a sua primeira nota"<<endl;
  cin>>n1;
  cout<<"Digite a sua segunda nota"<<endl;
  cin>>n2;
  cout<<"Digite a sua terceira nota"<<endl;
  cin>>n3;
  cout<<"Digite a sua quarta nota"<<endl;
  cin>>n4;

  ma= (n1+n2+n3+n4)/4;
  cout<<"Sua M�dia Aritm�tica � "<<ma<<endl;

  if(ma>=7){
    cout<<"Aprovado";
  } else{
    cout<<"Reprovado";
  }
  
  return 0;
}