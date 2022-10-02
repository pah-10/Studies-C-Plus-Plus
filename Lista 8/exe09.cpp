#include <iostream>
using namespace std;

bool verificaNum(int num){
	if(num > 0){
		return true;
	}else{
		return false;
	}
}
int main() {
	int valor;
	bool verifica;

	cout<<"----VERIFICA SE O NÚMERO É POSITIVO OU NEGATIVO----"<<endl;
	cout<<"\tInsira o valor: ";
	cin>>valor;
	cout<<endl;

	verifica = verificaNum(valor);

	cout<<verifica<<endl;
  return 0;
}