//Exercício 10 dos exercícios propostos
//Programa que recebe o custo de fabrica de um carro e mostra o custo ao consumidor. (o custo ao consumidor é a soma do custo de fabrica com a % do distribuidor e com % dos impostos)

#include <iostream>
using namespace std;
int main() {
  float custoF, custoC;

  cout<<"Digite o custo de fábrica do veículo"<<endl;
  cin>>custoF;

  if( custoF <= 12000) {
    cout<<"O custo ao consumidor será de "<<custoF*1.05;
  } else if ( custoF > 12000 && custoF <= 25000) {
    custoC = custoF + (custoF*10/100) + (custoF*15/100);
    cout<<"O custo ao consumidor será de "<<custoC;
  } else {
    custoC = custoF + (custoF*15/100) + (custoF*20/100);
    cout<<"O custo ao consumidor será de "<<custoC;
  }
  return 0;
}