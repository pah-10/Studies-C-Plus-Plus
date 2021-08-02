//exercicio 2- lista 1

#include <iostream>

using namespace std;

int main() {
   float C,F;
   
   cout <<"Qual a temperatura em Farenheit " << endl;
   cin >> F;
   
   //Formula
   C= (F-32)*5/9;
   
   cout <<"A temperatura em Farenheit convertida para  Centígrados é: " << C;

   return 0;
}
