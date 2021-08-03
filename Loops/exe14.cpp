#include <iostream>
using namespace std;
int main() {
  float marco1, marco2, e = 0, t = 0, v = 20;

  while(marco1 != marco2){

      if (marco1 != marco2){
        cout<<"Informe os valores dos marcos das cidades em ordem crescente"<<endl;
        cout<<"Qual o valor do 1° marco? "<<endl;
        cin>>marco1;
        cout<<"Qual o valor do 2° marco? "<<endl;
        cin>>marco2;

        //distancia de um marco para o outro
        e = marco2 - marco1;

        while (v <= 80){

          t = e/v;

          if(t > 2){
              cout<<"O percurso de "<<e<<" km , referente a distância entre o 1° marco ("<<marco1<<") e o 2° marco ("<<marco2<<"), á velocidade contante de "<<v<<"km/h, gastou "<<t<<" horas"<<endl;
          }
          v += 10;
        }
      }
   }
  return 0;
}