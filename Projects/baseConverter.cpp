#include <iostream>
#include <math.h>
using namespace std;

int conversao(int base, int quociente){
    int convertido = 0;
    int resto = 0;

    for(int expoente = 0; quociente != 0; expoente++){
        resto = quociente % base;
        quociente = quociente / base;

        convertido += (resto * pow(10,expoente));
    }
    
    return convertido;
}

string hexa(int base, int quociente){
    string convertido = "", invertida = "";
    int resto = 0;

	for(int expoente = 0; quociente != 0; expoente++){
    	resto = quociente % base;
    	quociente = quociente / base;

		if(resto == 10){
			convertido += 'A'; 
		}else if(resto == 11){
			convertido += 'B'; 
		}else if(resto == 12){
			convertido += 'C'; 
		}else if(resto == 13){
			convertido += 'D'; 
		}else if(resto == 14){
			convertido += 'E'; 
		}else if(resto == 15){
			convertido += 'F'; 
		}else{
			convertido +=  to_string(resto);
		}
	}

	//inverte a string
	for(int i = 0; i < convertido.length(); i++){
  		invertida = convertido[i] + invertida; 
	}

	return invertida;
}

int main() {
	int base, qtd;
	char decisao;

	do{
		system("clear");

  		cout<<"====== CONVERSÃO DECIMAL P/ OUTRAS BASES ======"<<endl<<endl;

		cout<<"\tDigite a base desejada: ";
		cin>>base;

		cout<<"\tAté qual número a conversão ocorrerá? ";
		cin>>qtd;

		cout<<endl<<"------ BASE 10 PARA A BASE "<<base<<" ------"<<endl<<endl;

		for(int i = 1; i <= qtd; i++){
			if(base != 16){
				cout<<"\t\t\t"<<i<<"\t->\t"<<conversao(base, i)<<endl;
			}else{
				cout<<"\t\t\t"<<i<<"\t->\t"<<hexa(base, i)<<endl;
			}
		}

		cout<<"==========================================================="<<endl;
		cout<<endl<<"\tDeseja realizar outra operação? (S/N) ";
		cin>>decisao;

	}while(decisao == 'S' || decisao == 's');

	cout<<endl<<"ATÉ A PROXIMA XOXO!"<<endl;

  return 0;
}
