//Exercicio 15 da lista 3
#include <iostream>
using namespace std;

int main() {
  string estado, M, A, S, Q;
  float a1, b, c;
  
  cout << "Insira um n�mero: " << endl;
  cin >> b;
  cout << "Insira segundo n�mero: " << endl;
  cin >> c;

  cout << "Escolha a opera��o: " << endl;
  cout << "A (Soma) " << endl;
  cout << "S (Subtra��o) " << endl;
  cout << "M (Multiplica��o) " << endl;
  cout << "Q (Divis�o) " << endl;
  cout << "Digite a letra"<<endl;
  cin >> a1;

  if (estado == A) {
    cout << "O resultado �: " << b + c << endl;
  }
  if (estado == S){
    cout << "O resultado �: " << b - c << endl;
  }
  if (estado == M){
    cout << "O resultado �: " << b * c << endl;
  }
  if (estado == Q){
    cout << "O resultado �: " << b / c << endl;
  }
  else {
    cout << "Erro - Opera��o inv�lida.";
  }
  return 0;
}