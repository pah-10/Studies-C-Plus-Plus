#include <iostream>
#define qtd 10
using namespace std;
int main() {
  int A[qtd], B[qtd], C[qtd];

  for(int i = 0; i < qtd; i++){
    cout<<"Digite um valor para o vetor A:"<<endl;
    cin>>A[i];
  }

  cout<<endl;

  for(int j = 0; j < qtd; j++){
    cout<<"Digite um valor para o vetor B:"<<endl;
    cin>>B[j];
  }

  cout<<"========================================"<<endl;
  cout<<"Valores armazenados no vetor C:"<<endl;

  for(int k = 0; k < qtd; k++){
    C[k] = A[k] - B[k];

    if(k != 9){
      cout<<C[k]<<", ";
    } else{
      cout<<C[k]<<".";
    }
  }

  return 0;
}