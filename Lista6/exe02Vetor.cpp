#include <iostream>
using namespace std;
int main() {
  int soma = 0, A[6] = {1, 0, 5, -2, -5, 7};

  //Soma o valor contido na posi��o 0, 1 e 5 
  soma = A[0] + A[1] + A[5];
  cout<<"A soma entre os valores das posi��es A[0], A[1] e A[5] � "<<soma<<endl<<endl;

  //Atibui o valor 100 na posi��o 4 do vetor
  A[4] = 100;

  cout<<"Valores armazenados no vetor A:";

  //Mostra as posi��es do vetor, uma em cada linha
  for(int i = 0; i < 6; i++){
    cout<<A[i]<<endl;
  }

  return 0;
}