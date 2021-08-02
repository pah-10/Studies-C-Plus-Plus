//Exercicio 12 da lista 3

#include <iostream>
using namespace std;

int main() {

  int ano, mes, dia, bissexto;
  cout << "Insira um dia: ";
  cin >> dia;
  cout << "Insira um mês: ";
  cin >> mes;
  cout << "Insira um ano: ";
  cin >> ano;

  if (dia > 32) {
    dia = 0;
    cout << "Dia inválido." << endl;
  } else if (mes > 12) {
    mes = 0;
    cout << "Esse mês é inválido." << endl;
  } else if ((dia >= 31) && (mes == 2)) {
    cout << "Esse dia é inválido" << endl;
    dia = 0;
  } else {
    cout << " ";
  }

  if ((dia >= 32) && ((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10))) {
    dia = 1;
    mes = ++mes;
    cout << "Amanhã será: " << dia << "/" << mes << "/" << ano;

  } else if ((dia > 30) && ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11))) {
    dia = 1;
    mes = ++mes;
    cout << "Amanhã será: " << dia << "/" << mes << "/" << ano;
  } else if ((dia >= 32) && (mes == 12)) {
    dia = 1;
    mes = 1;
    ano = ++ano;
    cout << "Amanhã será: " << dia << "/" << mes << "/" << ano;
  } else if ((dia > 30) && (mes == 2) && (bissexto == 1)) {
    dia = 1;
    mes = 3;
    cout << "Amanhã será: " << dia << "/" << mes << "/" << ano;
  } else if ((dia >= 29) && (mes == 2)) {
    dia = 1;
    mes = 3;
    cout << "Amanhã será: " << dia << "/" << mes << "/" << ano;
  } else if ((dia == 0) || (mes == 0)) {
    cout << "Fim do programa.";
  } else {
    dia = dia++;
    cout << "Amanhã será: " << dia << "/" << mes << "/" << ano;
  }
  return 0;
}