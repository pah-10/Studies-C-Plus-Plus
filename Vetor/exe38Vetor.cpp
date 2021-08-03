#include <iostream>
#define qtd 10
using namespace std;

int main() {
  int vet[qtd], t = 0, j, num;

  for(t = 0; t < qtd; t++) {
      cout << "Digite um valor: ";
      cin >> num;
      for(j = 0; j < t; j++)
          if(vet[j] > num)
              break;
      if(j < t)
          for(int i = t; i > j; i--)
              vet[i] = vet[i-1];
      vet[j] = num;
  }

  for(int i = 0; i < qtd; i++)
    cout << vet[i] << "  ";

  return 0;
}