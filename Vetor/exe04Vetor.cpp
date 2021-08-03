#include <iostream>
using namespace std;
int main() {
  int a[10], par = 0;

  for (int i = 0; i < 10; i++){
    cout<<"Digite um número"<<endl;
    cin>>a[i];

    if(a[i] % 2 == 0){
      cout<<"\nO número "<<a[i]<<" é par."<<endl;
      par += 1;
    }
  }
  cout<<endl<<"Existe "<<par<<" número(s) par(es) no conjunto";
  return 0;
}