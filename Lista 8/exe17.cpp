#include <iostream>
using namespace std;

float calc_media(){
 float valor = 0, qtd, media = 0, contador = 0;

	cout<<"----M�DIA ARITM�TICA----"<<endl;
	cout<<"Digite a quantidade de n�meros: ";
	cin>>qtd;
	cout<<endl;

	while(contador != qtd){
		cout<<"\tDigite o valor: ";
		cin>>valor;
		media +=valor;
		contador++;
	}

 return media/qtd;
}

int main(){
	float media;

	media = calc_media();

	cout<<endl<<"A media aritm�tica dos valores � "<<media;

	return 0;
}