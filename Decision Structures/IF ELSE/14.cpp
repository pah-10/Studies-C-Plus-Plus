//Exercicio 14 da lista 3
#include <iostream>
using namespace std;
int main() {
  int x;

  cout<<"Digite um valor para X"<<endl;
  cin>>x;

  if(x == 1){
    x = 2;
  } else if (x < 1){
    x= 4- (x*x);
  } 
  if (x > 1){
    x = 2 + (x*x);
  }

  cout<<"X será igual a: "<<x;

  return 0;
}