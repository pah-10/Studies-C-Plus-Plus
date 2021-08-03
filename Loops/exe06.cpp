#include <iostream>
using namespace std;
int main() {
  float massa, massaI, i=0, segundos=0, minutos=60, hora=3600, h = 0, m = 0, s = 0;
  //1 minuto tem 60 segundos e 1 hora tem 3600 segundos

  cout<<"Informe o valor da massa do material em gramas: "<<endl;
  cin>>massaI;

  massa = massaI;

  while( massa >= 0.5){
    segundos += 50;
    massa /= 2; 
  }
  
  s = segundos;
  //transforma o tempo de segundos, no mesmo tempo, só que em minutos
  m = segundos/60;
  //transforma o tempo de segundos, no mesmo tempo, só que em horas
  h = segundos/3600;

  cout<<endl;
  cout<<"A massa inicial era "<<massaI<<" gramas"<<endl;
  cout<<"Massa final do material é "<<massa<<" gramas"<<endl;
  cout<<"A massa se tormou menor que 0,5 gramas em: "<<endl;
  cout<<"Tempo calculado, somente, em horas: "<<h<<endl;
  cout<<"Tempo calculado, somente, em minutos: "<<m<<endl;
  cout<<"Tempo calculado, somente, em segundos: "<<s<<endl;

  return 0;
}