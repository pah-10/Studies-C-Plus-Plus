#include <iostream>
using namespace std;

char conceitoTab(float nota){
	if(nota < 5){
		return 'D';
	} else if(nota >= 5 && nota <7){
		return 'C';
	} else if(nota >= 7 && nota <9){
		return 'B';
	}else{
		return 'A';
	}
}

int main() {
	float media;
	char conceito;

	cout<<"Insira a média da aluna(o): ";
	cin>>media;

	conceito = conceitoTab(media);

	cout<<"O conceito do aluno é "<<conceito<<endl;
	
	return 0;
}