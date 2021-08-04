//Exercicio 4 dos propostos
//Programa que compara três números e mostra o maior deles

#include <iostream>
using namespace std;
int main() {
  float n1, n2, n3;

  cout<<"Digite um número"<<endl;
  cin>>n1;
  cout<<"Digite outro número"<<endl;
  cin>>n2;
  cout<<"Digite mais um número"<<endl;
  cin>>n3;

  if (n1 > n2 && n1 >n3 ){
    cout<<n1;
  } else if (n2 > n1 && n2 > n3) {
    cout<<n2;
  } else {
    cout<<n3;
  }

  return 0;
}