#include <iostream>
#define qtd 200
using namespace std;
int main() {
  float a[qtd];

  for(int i = 0; i < qtd; i++){
    cout<<"Digite um valor"<<endl;
    cin>>a[i];
  } 
  for(int j = qtd-1; j >= 0; j--){
    if(j != 0){
      cout<<a[j]<<", ";
    } else{
      cout<<a[j]<<".";
    }
  }
  return 0;
}