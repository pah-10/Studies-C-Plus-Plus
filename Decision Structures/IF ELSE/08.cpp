//Exercicio 8 lista3
#include <iostream>
using namespace std;
int main() {
  float alt,m , f, sexo, pIdeal;
  
  cout<<"Informe a sua altura"<<endl;
  cin>>alt;
  cout<<"informe se seu sexo é Masculino ou Feminino ( digite 'm' ou 'f')"<<endl;
  cin>>m;
  cin>>f;
  cin>>sexo;

  if(sexo == m){
    pIdeal=(72.7*alt)-58;
} else{
  pIdeal= (62.1*alt)-44.7;
}

cout<<"Seu peso ideal é "<< pIdeal;

return 0;
}