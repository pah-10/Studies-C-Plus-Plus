//Exercício 5 dos propostos
//Programa que recebe dois números e execute a operação escolhida pelo usuário

#include <iostream>
using namespace std;
int main() {
  int n1, n2, usuario;

  cout<<"Digite o primeiro número"<<endl;
  cin>>n1;
  cout<<"Digite o segundo número"<<endl;
  cin>>n2;

  cout<<"Digite 1 se quiser a média entre os números"<<endl;
  cout<<"Digite 2 se quiser a diferença do maior número pelo menor"<<endl;
  cout<<"Digite 3 se quiser o produto entre os números"<<endl;
  cout<<"Digite 4 se quiser a divisão do primeiro pelo segundo número"<<endl;

  cin>>usuario;
  switch (usuario)
  {
    case 1:
      cout<<(n1+n2)/2;
    break;
  
   case 2:
    if(n1>n2){
      cout<<n1-n2;
    } else{
      cout<<n2-n1;
    }
     
   break;

   case 3:
     cout<<n1*n2;
   break;

  case 4:
    if(n2 != 0){
      cout<<n1/n2;
    }
    break;

  default:
    cout<<"ERROR";
}
  return 0;
}