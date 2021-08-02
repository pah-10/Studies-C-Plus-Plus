#include <iostream>
using namespace std;

int main(){

  float n1, n2, media;
  cout<<"Qual o resultado da sua primeira prova?"<<endl;
  cin>>n1;
  
  cout<<"Qual o reultado da sua segunda prova?"<<endl;
  cin>>n2;

  media = (n1+n2)/2;
  
  cout << "A media de suas notas é: " << media;

  return 0;
}
