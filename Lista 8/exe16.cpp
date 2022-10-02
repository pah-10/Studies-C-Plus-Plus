#include <iostream>
using namespace std;

void pesquisa(int pessoas){
	float salario, media_Sal = 0, maior_Sal = 0, porcentagem_Sal = 0;
	int filhos, media_Filhos = 0;
	
	for(int i = 1; i <= pessoas; i++){
		cout<<"Qual o salário da "<<i<<"° pessoa: ";
		cin>>salario;
		cout<<"Quantos filhos essa pessoa tem? ";
		cin>>filhos;

		media_Sal += salario;
		media_Filhos += filhos;

		if(salario > maior_Sal)
			maior_Sal = salario;
		
		if(salario <= 350)
			porcentagem_Sal++;
		
	}

	cout<<endl<<"----RESULTADOS DA PESQUISA----"<<endl;
	cout<<"\tMédia de salário da população: "<<maior_Sal/pessoas<<endl<<"\tMédia (aproximada) do número de filhos: "<<media_Filhos/pessoas<<endl<<"\tMaior salário: "<<maior_Sal<<endl<<"\tPercentual de pessoas com salário até R$350,00: "<<porcentagem_Sal/pessoas<<endl;
}

int main() {
	int pessoas;

	cout<<"Quantas pessoas serão avaliadas? ";
	cin>>pessoas;

	pesquisa(pessoas);

  return 0;
}