//Exercicio 3 da lista 1
#include <iostream>
using namespace std;
int main (){
  float alt, peso, IMC;

  cout<<"Informe o seu peso."<<endl;
  cin>>peso;
  cout<<"Informe a sua altura."<<endl;
  cin>>alt;

  IMC= peso/(alt*alt);

  cout<<"O seu �ndice de Massa Corporal (IMC) �: "<<IMC;

return 0;
}