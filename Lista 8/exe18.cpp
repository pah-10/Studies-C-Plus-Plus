#include <iostream>
using namespace std;

float calculo(int n){
	float fatorial = 1;

	for(int i = 1; i <= n; i++){ 
		fatorial *= i; 
	}

	return fatorial;
}

int main() {
	float num = 0, fatorial = 0;

	cout<<"----CALCULO DO FATORIAL----"<<endl;
	cout<<"\tDigite o valor de N: ";
	cin>>num;

	fatorial = calculo(num);

	cout<<"O fatorial de "<<num<<" é "<<fatorial<<endl;
  return 0;
}