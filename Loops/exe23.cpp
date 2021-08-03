#include <iostream>
#include <math.h>
using namespace std;
int main() {
  float denominador = 50, S = 0, termos = 0, i = 1, j=0;

//maneira1
  while(i <= 50){
    termos = pow(2,i)/denominador;
    S = S + termos;
    i = i + 1;
    denominador = denominador - 1;

  }

  cout<<"S = "<<S;
    cout<<endl;

//maneira2
  while(denominador != 0){
    termos = pow(2,j)/denominador;
    j =51-denominador;
    S += termos;
    denominador -= 1;
  }

  cout<<"S = "<<S;
    cout<<endl;

//maneira3
    for(int k = 0; k < denominador; k++){
   termos = pow(2,k)/denominador;
    S = S + termos;
    denominador = denominador - 1;

  }

    cout<<"S = "<<S;
    cout<<endl;

  return 0;
}