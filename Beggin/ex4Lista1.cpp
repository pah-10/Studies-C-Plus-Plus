//Exerc�cio 4 da lista 1

#include <iostream>
#include <math.h>
using namespace std;
int main() {
  float M,p,n, i;
cout<<"Digite o valor atual"<<endl;
cin>>p;
cout<<"Digite o n�mero de per�odos (m�s/dia/ano)"<<endl;
cin>>n;
cout<<"Digita a taxa de juros"<<endl;
cin>>i;

M= p * pow((1+i),2);

cout<<"O montante vai ser igual a "<<M<<endl;
  return 0 ;
}