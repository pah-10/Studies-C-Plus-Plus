//Exercicio 5 da lista 3

#include <iostream>
using namespace std;
int main() {
  int A, B, C;

  cout<<"Digite um valor"<< endl;
  cin>>A;
  cout<<"Digite outro valor"<<endl;
  cin>>B;

//Se A for igual a B soma
  if(A == B){
    C=A+B;
  } 
//Senão for multiplica
  else{
    C=A*B;
  }

  cout<<C;

  return 0;
}