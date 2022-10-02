#include <iostream>
using namespace std;
int main() {
  float a[50];

  for(int i = 0; i < 50; i++){
    a[i] = ((i + (5*i)) % (i + 1));
  }

  cout<<"Valores armazenados no vetor:"<<endl;
  for(int j = 0; j < 50; j++){
    if(j != 49){
      cout<<a[j]<<", ";
    } else{
      cout<<a[j]<<"."<<endl;
    }
  }

  return 0;
}