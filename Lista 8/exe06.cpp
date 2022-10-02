#include <iostream>
using namespace std;

int converteIdade(int year, int months, int day) {
	year *= 360;
	months *= 30;

	int d = year + months + day;

  return d;
}

int main(){
	int anos, meses, dias, qtdDias;

  cout<<"-----DIGITE A SUA IDADE-----"<<endl;
	cout<<"\tEm anos: ";
	cin>>anos;
	cout<<"\tEm meses (30 dias): ";
	cin>>meses;
	cout<<"\tEm dias: ";
	cin>>dias;
	cout<<endl;

  qtdDias = converteIdade(anos, meses, dias);

  cout<<"Você tem "<<qtdDias<<" dias de vida"<<endl;

  return 0;
}