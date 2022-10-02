#include <iostream>
using namespace std;

void pesquisa(int pessoas){
	float salario, media_Sal = 0, maior_Sal = 0, porcentagem_Sal = 0;
	int filhos, media_Filhos = 0;
	
	for(int i = 1; i <= pessoas; i++){
		cout<<"Qual o sal�rio da "<<i<<"� pessoa: ";
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
	cout<<"\tM�dia de sal�rio da popula��o: "<<maior_Sal/pessoas<<endl<<"\tM�dia (aproximada) do n�mero de filhos: "<<media_Filhos/pessoas<<endl<<"\tMaior sal�rio: "<<maior_Sal<<endl<<"\tPercentual de pessoas com sal�rio at� R$350,00: "<<porcentagem_Sal/pessoas<<endl;
}

int main() {
	int pessoas;

	cout<<"Quantas pessoas ser�o avaliadas? ";
	cin>>pessoas;

	pesquisa(pessoas);

  return 0;
}