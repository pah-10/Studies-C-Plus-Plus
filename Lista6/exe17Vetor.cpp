#include <iostream>
using namespace std;
int main() {
  float a[10];

  for(int i = 0; i < 10; i++){
    cout<<"Digite um número"<<endl;
    cin>>a[i];
    
    if(a[i] < 0){
      a[i] = 0;
    }
  }

  cout<<"===================="<<endl;
  cout<<"Valores armazenados no vetor:"<<endl;
  for(int j = 0; j < 10; j++){

    if(j != 9){
      cout<<a[j]<<", ";
    } else{
      cout<<a[j]<<"."<<endl;
    }
  }

  return 0;
}