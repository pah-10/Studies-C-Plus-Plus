#include <iostream>
using namespace std;
int main() {
  int a[6];

  for(int i = 0; i < 6; i++){
    cout<<"Digite um número par"<<endl;
    cin>>a[i];
  } 

  cout<<endl<<"Valores na ordem inversa:"<<endl;

  for(int j = 5; j >= 0; j--){

    if(j != 0){
      cout<<a[j]<<", ";
    } else{
      cout<<a[j]<<".";
    }
  }

  return 0;
}