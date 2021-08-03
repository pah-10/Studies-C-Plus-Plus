#include <iostream>
using namespace std;
int main() {
  float S = 0, denominador = 1, numerador1 = 37, numerador2 = 38, termos =0;

//maneira1
  while(denominador <= 37){

    if(numerador1 >= 1 && numerador2 >= 2){
      termos = (numerador1 * numerador2)/denominador;
      S += termos;
    }
    numerador1 -= 1;
    numerador2 -= 1;
    denominador += 1; 
  }

    cout<<"S = "<<S<<endl;

//maneira2
  while(numerador1 != 0){
      termos = (numerador1 * (numerador1 +1))/denominador;
      S += termos;
      numerador1 -= 1;
      denominador += 1; 
  }

  cout<<"S = "<<S;

  return 0;
}