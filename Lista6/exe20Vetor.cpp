#include <iostream>
#define qtd 10
using namespace std;
int main() {
  int a[qtd], b[qtd] = {0}, num = 0, j = 0;

  for(int i = 0; i < qtd; i++){
    cout<<"Digite um n�mero"<<endl;
    cin>>num;

    if(num < 0 || num > 50){
      cout<<"O n�mero inserido est� fora do intervalo";
      return 0;
    } else{
      a[i] = num;

      if(a[i] % 2 != 0){
        b[j] = a[i];
        j++;
      }
    }
  }
    cout<<"=========================="<<endl;
    cout<<"Valores contidos no 1� vetor:"<<endl;
    for(int j = 0; j < qtd; j++){
      if(j != 9){
        cout<<a[j]<<"-";
        j += 1;
        cout<<a[j]<<endl;
      } else {
        cout<<a[j];
      }
    }

    cout<<endl<<"Valores �mpares contidos no 2� vetor:"<<endl;
    for(int k = 0; k < j; k += 2){
      if(k != k-1){
        cout<<b[k]<<"-";
        k += 1;
        cout<<b[k]<<endl;
      } else {
        cout<<b[k];
      }
    }

  return 0;
}