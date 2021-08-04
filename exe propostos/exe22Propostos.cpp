//Exercicio 22 dos exercicios propostos
//Programa que recebe a idade e o peso de alguém e verifica em qual grupo de risco a pessoa se encaixa

#include <iostream>
using namespace std;
int main() {
  float peso, idade;

  cout<<"Informe a sua idade"<<endl;
  cin>>idade;
  cout<<"Informe o seu peso"<<endl;
  cin>>peso;

  if (idade < 20){
    if ( peso <= 60)  {
    cout<<"9";
  } else if (peso > 60 && peso <= 90){
    cout<<"8";
  } else {
    cout<<"7";
  }
}
  else if (idade >= 20 && idade <= 50) {
  if ( peso <= 60) {
  cout<<"6";
  } else if (peso > 60 && peso <= 90){
   cout<<"5";
   } else {
    cout<<"4";
  }
}
  else {
    if ( peso <= 60){
    cout<<"3";
    } else if  (peso > 60 && peso <= 90){
    cout<<"2";
    } else { 
    cout<<"1";
  }
}
return 0;
}