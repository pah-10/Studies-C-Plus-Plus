//Exercicio 3 dos propostos
//Programa que recebe dois n�meros e mostra o menor deles

#include <iostream>
using namespace std;
int main() {
  float n1, n2;

  cout<<"Digite um n�mero"<<endl;
  cin>>n1;
  cout<<"Digite outro n�mero"<<endl;
  cin>>n2;

  if (n1<n2) {
    cout<<n1;
  } else {
    cout<<n2;
  }
  return 0;
}