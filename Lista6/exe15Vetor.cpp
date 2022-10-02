#include <iostream>
#define N 10
using namespace std;
int main() {
  int vet[N] = {0}, q1 = 0, num;

  //leitura do vetor com eliminação dos repetidos
  for(int i = 0; i < N; i++) {
    cout << "Digite valor " << i+1 << ": ";
    cin >> num;
    int j = 0;
    for(j = 0; j < q1; j++)
      if(num == vet[j]){
          break;
      }
      if(j == q1){ // indica que não encontrou o valor repetido
        vet[q1++] = num;
      }
    }

  cout<<endl;
    // impressão do vetor
    for(int i = 0; i < q1; i++){
        cout << vet[i] << "\t";
    }
    return 0;
}