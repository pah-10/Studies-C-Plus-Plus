#include <iostream>
#define qtd 5
using namespace std;
int main() {
  float matriz[qtd][qtd] = {0}, x, linha = 0, coluna = 0, encontrado = 0;

  cout<<"Qual valor será buscado?"<<endl;
  cin>>x;
  cout<<endl;

  for(int i = 0; i < qtd; i++){
    for(int j = 0; j <qtd; j++){
      cout<<"Digite um valor da matriz"<<endl;
      cin>>matriz[i][j];
      
    }
  }

  for(int i = 0; i < qtd; i++){
    for(int j = 0; j <qtd; j++){
      if(matriz[i][j] == x){
        linha = i;
        coluna = j;
        cout<<"==========================="<<endl;
        cout<<"O valor "<<x<<" está localizado na linha "<<linha<< " e na coluna "<<coluna<<endl;
        encontrado++;
      }
    }
  }

  if(encontrado == 0){
    cout<<"==========================="<<endl;
    cout<<"Valor não encontrado"<<endl;
  }
  
  return 0;
}