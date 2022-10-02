#include <iostream>
using namespace std;
int main() {
  float a[10], b[10], c[20];
  int l = 0, m = 0;

  for(int i = 0; i < 10; i++){
    cout<<"Digite um valor para o vetor A:"<<endl;
    cin>>a[i];
  }

  cout<<endl;

  for(int j = 0; j < 10; j++){
    cout<<"Digite um valor para o vetor B:"<<endl;
    cin>>b[j];
  }

  for(int i = 0; i < 20; i++){
    //se a posição i for divisivel por 0
        if(i % 2 == 0){
          c[i]=a[l];  
          l++;   
        } else{
          c[i]=b[m];
          m++;
      }
  }

  for(int k = 0; k < 20; k++){
    if(k != 19){
      cout<<c[k]<<", ";
    } else{
      cout<<c[k]<<".";
    }
  }

  return 0;
}