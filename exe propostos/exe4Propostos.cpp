//Exercicio 4 dos propostos
//Programa que compara tr�s n�meros e mostra o maior deles

#include <iostream>
using namespace std;
int main() {
  float n1, n2, n3;

  cout<<"Digite um n�mero"<<endl;
  cin>>n1;
  cout<<"Digite outro n�mero"<<endl;
  cin>>n2;
  cout<<"Digite mais um n�mero"<<endl;
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