#include <iostream>
using namespace std;
int main() {
  int numerador = -1;
  float resposta = 0;

  for (int denominador = 1; denominador <= 50; denominador++){
    numerador = numerador + 2;
    resposta = resposta + (numerador/denominador);
}

  cout<<"O resultade de S é: "<<resposta;

  return 0;
}