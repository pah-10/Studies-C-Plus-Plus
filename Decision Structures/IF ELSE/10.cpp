//Exercicio 10 da lista 3

#include <iostream>
using namespace std;
int main() {
  float alt,peso,IMC;

  cout<<"Informe a sua altura"<<endl;
  cin>>alt;
  cout<<"Informe o seu peso"<<endl;
  cin>>peso;

  IMC=peso/(alt*alt);
  cout<< "O seu IMC é "<< IMC <<endl;

  if(IMC < 18.5){
  cout<<"Abaixo do peso";
} 
  if(IMC > 18.5 && IMC < 25){
    cout<<"Peso normal";
  }
  if(IMC > 25 && IMC < 30){
    cout<<"Acima do peso";
  }
  if(IMC >30){
    cout<<"Obeso";
  }
  
  return 0;
}