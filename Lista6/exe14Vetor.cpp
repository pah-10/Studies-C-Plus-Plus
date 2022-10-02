#include <iostream>
using namespace std;
int main() {
  float a[10], contador;

  for(int i = 0; i < 10; i++){
    cout<<"Digite um número"<<endl;
    cin>>a[i];
  }

  cout<<"========================"<<endl;
  cout<<"Valores repetidos:"<<endl;
  for(int j = 0; j < 10; j++){
    for(int k = j+1; k < 10; k++){
      if(a[j] == a[k]){
        cout<<a[j]<<endl;
      }else{
        contador++;
      }
    }
  }

  //o for vai executar 45 vezes, se o contador for igual a 45 é pq nenhum valor igual foi encontrado
  if(contador == 45){
    cout<<"Não existe valores repetidos";
  }

  return 0;
}