//Exercicio 11 lista 3
#include <iostream>
using namespace std;
int main() {
  int num1, num2, num3;

  cout<<"Digite um número" << endl;
  cin>> num1;
  cout<<"Digite outro número" << endl;
  cin>> num2;
  cout<<"Digite mais um número" << endl;
  cin>> num3;

  if(num1> num2 && num2 <num3){
    cout<<num3<<num2<<num3;
  } else if (num2< num1 && num1<num3){
    cout<<num1<<num2<<num3;
} else {
  cout<<num1<<num2<<num3;
}
return 0;
}
