#include <iostream>
using namespace std;

void duracao(int ho, int mo, int ht, int mt){
  int hd = 0,md;
  
	if(ho >= ht){
		//Se Hora Inicial for maior doque a Final,o jogo começou em um dia e acabou no outro.
		hd = 12;
		ht += 12;
  }
  
	if(mo > mt){ 
		//Se Minuto Inicial for Maior do que o Final
		hd -= - 1;
		mt += 60;
	}
	
	md = mt - mo;
  hd = hd + (ht -  ho);
  
  cout<<"O jogo durou "<<hd<<" horas e "<<md<<" minutos.";
}

int main () {
	int hi, mi, hf, mf;
  
  cout<<"Qual foi a hora inicial do jogo: ";
	cin>>hi;
  
	while(hi > 23 || hi < 0){
    cout<<"Hora invalida."<<endl<<"\tHora inicial: ";
    cin>>hi;
  }
  
	cout<<"min inicial: ";
  cin>>mi;
  
	while(mi > 59 || mi < 0){
    cout<<"Minutos invalidos."<<endl<<"\tMinutos inicial: ";
    cin>>mi;
  }
  
	cout<<"Informe a hora final do jogo: ";
  cin>>hf;
  
	while(hf > 23 || hf < 0){
    cout<<"Hora invalida"<<endl<<"\tHora final: ";
    cin>>hf;
  }
  
	cout<<"min final: ";
  cin>>mf;
  
	while(mf > 59 || mf < 0){
    cout<<"Minutos invalidos"<<endl<<"\tmin final: ";
    cin>>mf;
  }
	
	duracao(hi, mi, hf, mf);

	return 0;
}