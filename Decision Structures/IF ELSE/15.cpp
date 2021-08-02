//Exercicio 15 da lista 3
#include <iostream>
using namespace std;

int main() {
  string estado, M, A, S, Q;
  float a1, b, c;
  
  cout << "Insira um número: " << endl;
  cin >> b;
  cout << "Insira segundo número: " << endl;
  cin >> c;

  cout << "Escolha a operação: " << endl;
  cout << "A (Soma) " << endl;
  cout << "S (Subtração) " << endl;
  cout << "M (Multiplicação) " << endl;
  cout << "Q (Divisão) " << endl;
  cout << "Digite a letra"<<endl;
  cin >> a1;

  if (estado == A) {
    cout << "O resultado é: " << b + c << endl;
  }
  
  if (estado == S){
    cout << "O resultado é: " << b - c << endl;
  }
  
  if (estado == M){
    cout << "O resultado é: " << b * c << endl;
  }
  
  if (estado == Q){
    cout << "O resultado é: " << b / c << endl;
  }
  
  else {
    cout << "Erro - Operação inválida.";
  }
  
  return 0;
}
