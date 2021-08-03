#include <iostream>
using namespace std;
int main() {
  float valorI = 5, lucro = 0;
  int qtdI = 120, despesa = 200;

  do{
    lucro = (qtdI*valorI)-despesa;
    cout<<"Se o ingresso do espetáculos for vendido à R$"<<valorI<<", espera-se que "<<qtdI<<" ingressos sejam vendidos. Resultando em um lucro de R$"<<lucro<<endl;

    valorI -= 0.50;
    qtdI += 26;
  } while(valorI != 0.5); 

  return 0;
}