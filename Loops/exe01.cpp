#include <iostream>

using namespace std;

int main() {
  int idade, i = 0;
  float media = 0, soma = 0;

  do{
    cout<<"Insira uma idade ";
    cin>>idade;

    soma += idade;
    i++;
  } while(idade != 0);

  //a vari�vel media recebe o resultado a expressao. � tirado 1 da var i para remover o loop da idade 0
  media = soma/(i-1);
  cout<<"A m�dia das idades �: "<<media;

  return 0;
}