#include <iostream>
#include <math.h>
using namespace std;

float calculo(int n){
	int i = 1;
	float denominador = 4;
	float numerador = 2;
	float soma = 1;

	while(i <= (pow(n,2) + 1)){
		if(i % 2 != 0){
			numerador += i;
			soma = (numerador/denominador);
		}

		if(denominador <= (n + 3)){
			denominador++;
		}

		i++;
	}

	return soma;
}

int main() {
	float N = 0;
	float S = 0;

	cout<<"Digite o valor de N: ";
	cin>>N;

	S = calculo(N);

	cout<<"O valor de S é "<< S <<endl;
  return 0;
}