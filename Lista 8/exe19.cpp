#include <iostream>
using namespace std;

void eq2grau(int *maior, int *menor) {
	int valor = 0;

	for(int i = 1; i <= 50; i++){
		cout<<"Digite o "<<i<<"° número: ";
		cin>>valor;

		if(i == 0){
			*maior = valor;
			*menor = valor;
		}

		if(valor > *maior){
			*maior = valor;
		}

		if(valor < *menor){
			*menor = valor;
		}
	}
}

int main() {
  int maior, menor;

  eq2grau(&maior, &menor);

  cout<<endl<<"Maior número: "<<maior<<endl;
	cout<<"Menor número: "<<menor<<endl;;

  return 0;
}