#include <iostream>
using namespace std;
int main() {
  float a[5], b[5], prod = 0;

  for(int i = 0; i < 5; i++){
    cout<<"Digite um valor para o vetor a:"<<endl;
    cin>>a[i];
  }

  cout<<endl;

  for(int j = 0; j < 5; j++){
    cout<<"Digite um valor para o vetor b:"<<endl;
    cin>>b[j];
  }

  cout<<"====================================="<<endl;
  cout<<"Valores armazenados no vetor a:"<<endl;
  for(int k = 0; k < 5; k++){
    if(k != 4){
      cout<<a[k]<<", ";
    } else{
      cout<<a[k]<<"."<<endl;
    }
  }

  cout<<"Valores armazenados no vetor b:"<<endl;
  for(int l = 0; l < 5; l++){
    if(l != 4){
      cout<<b[l]<<", ";
    } else{
      cout<<b[l]<<"."<<endl;
    }
  }

  for(int m = 0; m < 5; m++){
    prod += (a[m] * b[m]);
  }

  cout<<"O produto escalar entre os conjuntos resulta em "<<prod;

  return 0;
}