#include <iostream>
using namespace std;

float calculaPeso(float alt, char sex){
	float pesoI = 0;

	if(sex == 'F' || sex == 'f'){
		pesoI = (62.1 * alt) - 44.7;
	}else{
		pesoI = (72.2 * alt) - 58;
	}

	return pesoI;
}

int main() {
	float altura, pesoIdeal = 0;
	char sexo;

	cout<<"----PESO IDEAL----"<<endl;
	cout<<"\tDigite a sua altura: ";
	cin>>altura;
	cout<<"\tQual o seu sexo (F/M)? ";
	cin>>sexo;
	cout<<endl;

	pesoIdeal = calculaPeso(altura, sexo);

	cout<<"O seu peso ideal é "<<pesoIdeal<<endl;
  return 0;
}