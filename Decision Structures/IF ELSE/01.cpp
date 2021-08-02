//Exercicio 1 da lista3
#include <iostream>

using namespace std;

int main() {
  float n1,n2,n3,n4,ma;

  cout<< "Digite a nota da sua primeria prova" <<endl;
  cin>>n1;
  cout<< "Digite a nota da sua segunda prova" <<endl;
  cin>>n2;
  cout<< "Digite a nota da sua terceira prova" <<endl;
  cin>>n3;
  cout<< "Digite a nota da sua quarta prova" <<endl;
  cin>>n4;

  ma= (n1+n2+n3+n4)/4;

  cout<<"A média aritmética de suas notas é " <<ma << endl;

//Se a media das notas for maior ou igual a 7
  if (ma >= 7){
    cout<<"Aprovado";
  } else{
    cout<<"Reprovado";
  }
  
  return 0;
}
