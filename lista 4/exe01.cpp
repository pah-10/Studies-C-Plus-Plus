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

  //a variável media recebe o resultado a expressao. É tirado 1 da var i para remover o loop da idade 0
  media = soma/(i-1);
  cout<<"A média das idades é: "<<media;

  return 0;
}