#include <iostream>
using namespace std;

bool verificaValor(int num){
	int soma = 0;

	for(int i = 1; i < num; i++){
		if(num % i == 0){
			soma += i;
		}
	}

	if(soma == num){
		return true;
	}else{
		return false;
	}
}

int main(){
	int valor;
	bool verifica;

	cout<<"----VERIFICA SE UM VALOR � PERFEITO OU N�O----"<<endl;
	cout<<"\tInsira o valor: ";
	cin>>valor;
	cout<<endl;

	verifica = verificaValor(valor);

	cout<<verifica<<endl;
	return 0;
}