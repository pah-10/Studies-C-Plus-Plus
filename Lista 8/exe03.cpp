#include <iostream>
using namespace std;

string valor_Logico (int valor) {
	int resultado = 0;
 
 for (int i = 2; i <= valor / 2; i++) {
    if (valor % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0){
    return "Verdadeiro";
  }else{
    return "Falso";
	}
}

int main() {
	int num;
	string logico;

	cout<<"Insira um valor inteiro positivo"<<endl;
	cin>>num;
	
	logico = valor_Logico (num);

	cout<<logico;
  return 0;
}