#include <iostream>
#define qtd 4
using namespace std;
int main() {
  float matriz[qtd][qtd] = {0}, produto = 0; 

  for(int i = 0; i < qtd; i++){
    for(int j = 0; j < qtd; j++) {
      matriz[i][j] = i * j;
    }
  }

  for(int i = 0; i < qtd; i++){
    for(int j = 0; j < qtd; j++) {
      cout << matriz[i][j] << "\t";
    }
    cout<<endl;
  }

  return 0;
}