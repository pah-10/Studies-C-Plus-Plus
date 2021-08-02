//Exercicio 9 lista 3
#include <iostream>
using namespace std;

int main() {
  float produto;
  int escolha;

  cout << "Qual o o valor do produto?"<<endl;
  cin >> produto;
  
  cout << "Qual a forma de pagamento" << endl<< "Digite 1 se for a vista dinheiro ou cheque (10% de desconto)" << endl<< "Digite 2 se for a vista no cartão de crédito (15% de desconto)" << endl<< "Digite 3 se for em até duas vezes" << endl<< "Digite 4 se for em mais de duas vezes (10% de juros)" << endl;
  cin >> escolha;

  if (escolha == 1){
    cout << "Valor a ser pago é: " << ((produto*10) / 100);
  }
  if (escolha == 2){
    cout << "O valor a ser pago é: " << ((produto*15) / 100);
  }
  if (escolha == 3){
    cout << "O valor a  ser pago é: " << (produto);
  }
  if (escolha == 4){
    cout << "O valor a ser pago é: " << (produto*1.10);
  
  return 0;
}
}