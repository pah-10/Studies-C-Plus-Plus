#include <iostream>
using namespace std;
int main() {
  //a qtd de habitantes de cada cidade foi trocada, pois, se o código fosse feito com os valores do enunciado, o país A já seria maior que o país B, resultando em 0 anos 
  float paisA = 20000000, paisB = 90000000, taxaA = 0.03, taxaB = 0.015;
  int anos = 0;

  while(paisA < paisB){
    paisA = paisA + (paisA * taxaA);
    paisB = paisB + (paisB * taxaB);
    anos += 1;
  }

  cout<<"A população do país A irá ultrapassar a população do país B em "<<anos<<" anos";

return 0;
}