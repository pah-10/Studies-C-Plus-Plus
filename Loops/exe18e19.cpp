#include <iostream>
using namespace std;
int main() {
  float tempoP1, tempoP2, tempoP3, tempoE1, tempoE2, tempoE3, delta = 0, pontos = 0, totalP = 0, vencedora = 0, maisP = 0;
  int numI;

  cout<<"Qual foi o tempo-padrão da 1° fase?"<<endl;
  cin>>tempoP1;
  cout<<"Qual foi o tempo-padrão da 2° fase?"<<endl;
  cin>>tempoP2;
  cout<<"Qual foi o tempo-padrão da 3° fase?"<<endl;
  cin>>tempoP3;

  while(numI != 9999){
    cout<<"Informe o número de inscrição da equipe: "<<endl;
    cin>>numI;

    if(numI != 9999){

      for(int etapa = 1; etapa <= 2; etapa++){
        cout<<"Qual foi o tempo da equipe nesta fase?"<<endl;
        cin>>tempoE1;
       /* cout<<"Qual foi o tempo da equipe na 2° fase?"<<endl;
        cin>>tempoE2;
        cout<<"Qual foi o tempo da equipe na 3° fase?"<<endl;
        cin>>tempoE3;*/

        //se for a 1° etapa

        switch (etapa){
          case 1 :
            delta = tempoP1 - tempoE1;
          break;

          case 2 :
            delta = tempoP2 - tempoE2;
          break;

          case 3 :
            delta = tempoP3 - tempoE3;
          break;
        }
        /*
        if(etapa == 1){
          delta = tempoP1 - tempoE1;
        }//se for a 2° etapa
          else if(etapa ==2){
            delta = tempoP2 - tempoE2;
        }//se for a 3° etapa
          else{
            delta = tempoP3 - tempoE3;
        }*/

        if(delta < 3){
          pontos += 100;
          totalP += pontos;
        } else if (delta >= 3 && delta <= 5 ){
          pontos += 80;
          totalP += pontos;
        }else{
          pontos = (80-(delta-5)/5);
          totalP += pontos;
        } 

        cout<<"A equipe "<<numI<<" teve "<<pontos<<" pontos na "<<etapa<<"° etapa"<<endl;

        totalP += pontos;

        if(etapa == 1){
          maisP = totalP;
          vencedora += numI;
        } else{
          if(totalP > maisP ){
            maisP = totalP;
            vencedora += numI;
          }
        }

      }//fim for
    }//fim if
  }//fim while

  cout<<"A equipe vencedora foi a equipe "<<vencedora;
  return 0; 
}