#include <iostream>
using namespace std;
int main() {
  int a[10], par = 0;

  for (int i = 0; i < 10; i++){
    cout<<"Digite um n�mero"<<endl;
    cin>>a[i];

    if(a[i] % 2 == 0){
      cout<<"\nO n�mero "<<a[i]<<" � par."<<endl;
      par += 1;
    }
  }
  cout<<endl<<"Existe "<<par<<" n�mero(s) par(es) no conjunto";
  return 0;
}