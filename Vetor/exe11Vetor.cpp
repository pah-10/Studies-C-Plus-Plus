#include <iostream>
using namespace std;
int main() {
  float a[10], soma = 0, qtdNeg = 0;

  for(int i = 0; i < 10; i++){
    cout<<"Digite um número"<<endl;
    cin>>a[i];

    if(a[i] < 0){
      qtdNeg += 1;
    } else{
      soma += a[i];
    }
  } 

  cout<<endl<<"=============================="<<endl;
  cout<<"Quantidade de números negativos: "<<qtdNeg<<endl;
  cout<<"A soma de todos os números positivos resulta em: "<<soma;
  return 0;
}