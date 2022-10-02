#include <iostream>
using namespace std;

float calculo(int n){
	float fatorial = 1, soma = 1;

	for(int i = 1; i <= n; i++){ // controla a qtd de números
		for(int j = i; j != 1; j--){ //calcula o fatorial
			fatorial *= j; 
		}
		soma += (1 / fatorial);
		fatorial = 1;
	}

	return soma;
}

int main() {
	float N = 0, S = 0;

	cout<<"Digite o valor de N: ";
	cin>>N;

	S = calculo(N);

	cout<<"O valor de S é "<< S <<endl;
  return 0;
}