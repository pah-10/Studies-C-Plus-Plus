#include <iostream>
using namespace std;
int main() {
  float x = 0, y = 0, lucro, lucroMax=0;
  int qtdStandart, qtdLuxo, operarios = 40, linhaS = 0, linhaL = 0, homensS, homensL;

  cout<<"Qual o valor do lucro dos r�dios standard?"<<endl;
  cin>>x;
  cout<<"Qual o valor do lucro dos r�dios luxo?"<<endl;
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
  cout<<"A quantidade de oper�rios na linha Standard � "<<linhaS<<", e, eles produzem um total de "<<homensS<<" r�dios standard"<<endl;
  cout<<"A quantidade de oper�rios na linha Luxo � "<<linhaS<<", e, eles produzem um total de "<<(homensL/2)<<" r�dios luxo"<<endl;
  cout<<"O lucro obtido � $"<<lucroMax;
  return 0;
}