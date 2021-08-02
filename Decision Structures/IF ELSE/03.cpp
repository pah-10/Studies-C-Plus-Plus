//Exercicio 3 da lista 3

#include <iostream>



using namespace std;



int main() {

   float num1, num2;


   
cout <<"Digite um número " << endl;

   cin >> num1;

   cout <<"Digite outro número " << endl;

   cin >> num2;



//Se o num1 for  menor que o num2, mostra o num1

  if (num1<num2){

    cout << num1;

  }

//Se não for mostra o num2

  else {

    cout<< num2;

  }


   return 0;

}