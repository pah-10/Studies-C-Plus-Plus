//Exerc�cio 6 dos propostos
//Programa que recebe dois n�meros e execute a opera��o escolhida pelo usu�rio

#include <iostream>
using namespace std;
int main() {
  int n1,n2,user;

  cout<<"Digite um n�mero"<<endl;
  cin>>n1;
  cout<<"Digite outro n�mero"<<endl;
  cin>>n2;

  cout<<"Digite 1 se voc� quiser a m�dia entre os n�meros"<<endl;
  cout<<"Digite 2 se voc� quiser a diferen�a do maior pelo menor"<<endl;
  cout<<"Digite 3 se voc� quiser o produto entre os n�meros"<<endl; 

  cin>>user;

  switch (user){
    case 1:
     cout<<(n1+n2)/2;
    break;

    case 2:
      if(n1 > n2 ){
        cout<<n1-n2;
      } else{
        cout<<n2-n1;
      }
    break;

    case 3:
    cout<<n1*n2;
    break;

    default:
    cout<<"ERROR";
  }

  return 0;
}