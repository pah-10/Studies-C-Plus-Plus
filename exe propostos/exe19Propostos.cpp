//Exercicio 19 dos exercicios propostos
//Programa que recebe a altura e o sexo de alguém e calcule seu peso ideal por fórmulas

#include <iostream>
using namespace std;
int main() {
  float alt,m , f, sexo, pI;
  
  cout<<"Digite sua altura"<<endl;
  cin>>alt;
  cout<<"informe se seu sexo é m (Masculino) ou f (Feminino)"<<endl;
  cin>>m;
  cin>>f;
  cin>>sexo;

  if(sexo == m){
    cout<<"Seu peso ideal é "<<(72.7*alt)-58;
} else{
  cout<<"Seu peso ideal é "<<(62.1*alt)-44.7;
}
return 0;
}