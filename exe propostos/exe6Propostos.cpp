//Exercício 6 dos propostos
//Programa que recebe dois números e execute a operação escolhida pelo usuário

#include <iostream>
using namespace std;
int main() {
  int n1,n2,user;

  cout<<"Digite um número"<<endl;
  cin>>n1;
  cout<<"Digite outro número"<<endl;
  cin>>n2;

  cout<<"Digite 1 se você quiser a média entre os números"<<endl;
  cout<<"Digite 2 se você quiser a diferença do maior pelo menor"<<endl;
  cout<<"Digite 3 se você quiser o produto entre os números"<<endl; 

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