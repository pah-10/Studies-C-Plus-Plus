//Exercicio 19 dos exercicios propostos
//Programa que recebe a altura e o sexo de algu�m e calcule seu peso ideal por f�rmulas

#include <iostream>
using namespace std;
int main() {
  float alt,m , f, sexo, pI;
  
  cout<<"Digite sua altura"<<endl;
  cin>>alt;
  cout<<"informe se seu sexo � m (Masculino) ou f (Feminino)"<<endl;
  cin>>m;
  cin>>f;
  cin>>sexo;

  if(sexo == m){
    cout<<"Seu peso ideal � "<<(72.7*alt)-58;
} else{
  cout<<"Seu peso ideal � "<<(62.1*alt)-44.7;
}
return 0;
}