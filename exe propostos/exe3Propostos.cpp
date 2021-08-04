//Exercicio 3 dos propostos
//Programa que recebe dois números e mostra o menor deles

#include <iostream>
using namespace std;
int main() {
  float n1, n2;

  cout<<"Digite um número"<<endl;
  cin>>n1;
  cout<<"Digite outro número"<<endl;
  cin>>n2;

  if (n1<n2) {
    cout<<n1;
  } else {
    cout<<n2;
  }
  return 0;
}