#include <iostream>
using namespace std;

int conta_divisores(int num){
  int div = 0;
    
  for(int i = num; i > 0; i--){
    if(num%i==0) div++;
  }
  
	return div;
}
int main() {
  int divisores = 0, numero;

	cout<<"Digite um n�mero: ";
	cin>>numero;

	divisores = conta_divisores(numero);

	cout<<"O n�mero "<<numero<<" tem "<<divisores<<" divisores"<<endl;

	return 0;
}