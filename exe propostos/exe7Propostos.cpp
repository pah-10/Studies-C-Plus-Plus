//Exercício 7 dos exercícios propostos
//programa que calcula se um funcionário terá um aumento de 30% em seu salário (inferiores a R$ 500.00)

#include <iostream>
using namespace std;
int main() {
  float salario;

  cout<<"Digite o valor do seu salário atual"<<endl;
  cin>>salario;

  if (salario < 500){
    cout<<"Seu salario foi reajustado para "<<salario*1.30;
  } else {
    cout<<"Você não tem direito ao aumento salarial";
  }
    return 0;
}