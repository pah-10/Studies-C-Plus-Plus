#include <iostream>
using namespace std;

float calculo(int n){
	float i = 2, soma = 1;

	while(i <= n){
		soma += (1 / i);
		i++;
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