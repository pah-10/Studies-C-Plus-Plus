#include <iostream>
using namespace std;
int main() {
  float x = 0, y = 0, lucro, lucroMax=0;
  int qtdStandart, qtdLuxo, operarios = 40, linhaS = 0, linhaL = 0, homensS, homensL;

  cout<<"Qual o valor do lucro dos rádios standard?"<<endl;
  cin>>x;
  cout<<"Qual o valor do lucro dos rádios luxo?"<<endl;
  cin>>y;

  homensS = 8;

  do{
    homensL = operarios - homensS;
    lucro =  homensS * x + (homensL * y) / 2;

    if(lucro > lucroMax){
      lucroMax = lucro;
      linhaS = homensS;
      linhaL = homensL;
    }

    homensS += 1;

  }while(homensS == 24);

  homensL = 16;

  do{
    homensS = operarios - homensL;
    lucro =  homensS * x + (homensL * y) / 2;

    if(lucro > lucroMax){
      lucroMax = lucro;
      linhaS = homensS;
      linhaL = homensL;
    }

    homensL += 1;

  }while(homensL == 32);

  cout<<endl;
  cout<<"A quantidade de operários na linha Standard é "<<linhaS<<", e, eles produzem um total de "<<homensS<<" rádios standard"<<endl;
  cout<<"A quantidade de operários na linha Luxo é "<<linhaS<<", e, eles produzem um total de "<<(homensL/2)<<" rádios luxo"<<endl;
  cout<<"O lucro obtido é $"<<lucroMax;
  return 0;
}