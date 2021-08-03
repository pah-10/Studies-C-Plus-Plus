#include <iostream>
using namespace std;
int main() {
  float numerador = 1, S = 0, termos = 0;
  int den = 1,j =0 ;

  for(int i =  1; numerador <= 10; i++){
        j = den % 2;
    if(j != 0){
    termos = numerador/den;
    S += termos;
    } else{
    termos = numerador/den;
    S -= termos;
    }
    numerador += 1;
    den = numerador * numerador;
  }
    cout<<"S = "<<S<<endl;

  return 0;
}