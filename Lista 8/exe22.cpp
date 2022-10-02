#include <iostream>
using namespace std;

float somatorio (float num){
	float soma = 0;
	for(int i = 1; i <= num; i++){
		soma += i;
	}

	return soma;
}

int main() {
	float numero, E = 0;

	cout<<"Digite um valor: ";
	cin>>numero;

	E = somatorio(numero);

	cout<<endl<<"O somatorio do número "<<numero<<" é "<< E<<endl;

  return 0;
}