#include <iostream>
using namespace std;

void categoriaTab(int idade, string *categoria){
	
	if(idade < 5){
		cout<<endl<<"IDADE INVÁLIDA"<<endl;
		*categoria = "---";
	}else if(idade >= 5 && idade <= 7){
		*categoria = "Infantil A";
	} else if(idade > 7 && idade <= 10){
		*categoria = "Infantil B";
	} else if(idade > 10 && idade <= 13){
		*categoria = "Juvenil A";
	}else if (idade > 13 && idade <= 17){
		*categoria = "Juvenil B";
	}else{
		*categoria = "Adulto";
	}
}

int main() {
	int idade;
	string categoria = "oi";

	cout<<"Insira a idade da nadadora(o): ";
	cin>>idade;

	categoriaTab(idade, &categoria);

	cout<<"A nadadora(o) é da categoria "<<categoria<<endl;
	
	return 0;
}