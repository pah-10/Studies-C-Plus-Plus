#include <iostream>
using namespace std;

float potencia(int x, int z){
	float resultado = 1;

	for(int i = 1; i <= z; i++){
		resultado *= x; 
	}

	return resultado;
}
int main() {
	int X, Z, result = 1;

	cout<<"Digite um valor para a base: ";
	cin>>X;
	cout<<"Digite um valor para o expoente: ";
	cin>>Z;
	
	result = potencia(X, Z);

	cout<<endl<<X<<" elevado a "<<Z<<" resulta em "<<result;
  return 0;
}