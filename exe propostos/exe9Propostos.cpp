//Exerc�cio 9 dos exercicios propostos
//Programa que calcula a % do credito especial dado aos clientes de acordo com o valor do saldo m�dio do �ltimo ano

#include <iostream>
using namespace std;
int main() {
  float sm,c;

  cout<<"Digite o valor do seu saldo m�dio do �ltimo ano"<<endl;
  cin>>sm;

  if (sm <= 200) {
      c = (sm*10)/100;
      cout<<"Saldo m�dio igual a "<<sm<<endl<<"Cr�dito igual a "<<c;
  } else if (sm > 200 && sm <= 300) {
      c = (sm*20)/100;
      cout<<"Saldo m�dio igual a "<<sm<<endl<<"Cr�dito igual a "<<c;
  } else if (sm > 300 && sm <= 400) {
      c = (sm*25)/100;
      cout<<"Saldo m�dio igual a "<<sm<<endl<<"Cr�dito igual a "<<c;
  } else {
     c = (sm*30)/100;
      cout<<"Saldo m�dio igual a "<<sm<<endl<<"Cr�dito igual a "<<c;
  }
  return 0;
}