//Exerc�cio 6 da lista 3

#include <iostream>



using namespace std;



int main( ) {

    int ano;
 

    cout<< "Digite um ano" << endl;
    
    cin>> ano;
    
    

    if (ano % 400 == 0) {

        cout<< "O ano " << ano<< " � bissexto" ;

    } else if (ano % 4 == 0 && ano % 100 != 0) {

       cout<< "O ano " <<ano<< " � bissexto" ;

    }
    else{

        cout<< "O ano " <<ano<< " n�o � bissexto";

    }

    

    return 0;

}