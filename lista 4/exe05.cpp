#include <iostream>
using namespace std;
int main() {
  //a qtd de habitantes de cada cidade foi trocada, pois, se o c�digo fosse feito com os valores do enunciado, o pa�s A j� seria maior que o pa�s B, resultando em 0 anos 
  float paisA = 20000000, paisB = 90000000, taxaA = 0.03, taxaB = 0.015;
  int anos = 0;

  while(paisA < paisB){
    paisA = paisA + (paisA * taxaA);
    paisB = paisB + (paisB * taxaB);
    anos += 1;
  }

  cout<<"A popula��o do pa�s A ir� ultrapassar a popula��o do pa�s B em "<<anos<<" anos";

return 0;
}