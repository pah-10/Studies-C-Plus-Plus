#include <iostream>
#define qtd 5
using namespace std;
int main() {
  float matriz[qtd][qtd] = {0}; 

  for(int i = 0; i < qtd; i++){
    for(int j = 0; j < qtd; j++) {
      if(i == j){
        matriz[i][j] = 1;
      }
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