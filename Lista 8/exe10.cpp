#include <iostream>
using namespace std;

bool verificaValor(int num){
	if(num % 2 == 0){
		return true;
	}else{
		return false;
	}
}

int main() {
	int valor;
	bool verifica;

	cout<<"----VERIFICA SE UM VALOR � �MPAR OU PAR----"<<endl;
	cout<<"\tInsira o valor: ";
	cin>>valor;

	verifica = verificaValor(valor);

	cout<<verifica<<endl;
  return 0;
}