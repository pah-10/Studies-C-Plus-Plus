//Exercício 2 da lista 3

#include <iostream>
using namespace std;
int main() {
  float n1,n2,ma;

  cout<<"Digite a nota da sua primeria prova" <<endl;
  cin>>n1;
  cout<<"Digite a nota da sua segunda prova" <<endl;
  cin>>n2;
  
  ma= (n1+n2)/2;

  cout<<"A média aritmética de suas notas é " <<ma << endl;

  if(ma < 3){
    cout<<"Reprovado";
  } 
  else if (ma> 3 && ma <7) {
    cout<<"Exame";
  }  
  else {
    cout<<"Aprovado";
  }

  return 0;

}