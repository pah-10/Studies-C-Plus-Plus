//Exerc�cio 7 dos exerc�cios propostos
//programa que calcula se um funcion�rio ter� um aumento de 30% em seu sal�rio (inferiores a R$ 500.00)

#include <iostream>
using namespace std;
int main() {
  float salario;

  cout<<"Digite o valor do seu sal�rio atual"<<endl;
  cin>>salario;

  if (salario < 500){
    cout<<"Seu salario foi reajustado para "<<salario*1.30;
  } else {
    cout<<"Voc� n�o tem direito ao aumento salarial";
  }
    return 0;
}