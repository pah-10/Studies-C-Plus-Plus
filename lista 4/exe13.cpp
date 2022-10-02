#include <iostream>
using namespace std;
int main() {
  float valorkwh, totalConsu, totalC = 0, totalR = 0, totalI = 0, mediaConsumo = 0;
  int qtdConsumidores = 1, qtdKwhMes, maiorC = 0, menorC = 0, i=1;
  char codConsu;

  cout<<"Qual o preço do KWH?"<<endl;
  cin>>valorkwh;
  cout<<"Informe o número de consumidores:"<<endl;
  cin>>qtdConsumidores;

  while(qtdConsumidores != 0){

    cout<<"Quantos KWH foram consumidos durante o mês?"<<endl;
    cin>>qtdKwhMes;
    cout<<"Qual o tipo de consumidor? \n Digite 'R' para residencial \n Digite 'C' para comercial \n Digite 'I' para industrial"<<endl;
    cin>>codConsu;


        switch (codConsu){
          case 'C': 
            totalC += qtdKwhMes; 
          break;

          case 'R': 
            totalR += qtdKwhMes; 
          break;

          case 'I': 
            totalI += qtdKwhMes; 
          break;
        }

        //Total para cada consumidor pagar
        totalConsu = qtdKwhMes * valorkwh;

        //maior e menor consumo
        if (i == 1){
        maiorC = qtdKwhMes;
        menorC = qtdKwhMes;
        } else {
            if (maiorC < qtdKwhMes){
            maiorC = qtdKwhMes;
          } else if  (qtdKwhMes < menorC){
            menorC = qtdKwhMes;
          }
        }

        //Media do total de consumo
        mediaConsumo = (totalR + totalC + totalI)/i;

        cout<<endl;
        cout<<"O consumidor " <<i<< " deve pagar um total de $"<<totalConsu<<endl;

    i += 1;
    qtdConsumidores -= 1;
  }

  cout<<endl;
  cout<<"O maior consumo foi: "<<maiorC<<endl;
  cout<<"O menor consumo foi: "<<menorC<<endl;
  cout<<"O total de consumo dos consumidores do tipo 'R' foi: "<<totalR<<endl;
  cout<<"O total de consumo dos consumidores do tipo 'C' foi: "<<totalC<<endl;
  cout<<"O total de consumo dos consumidores do tipo 'I' foi: "<<totalI<<endl;
  cout<<"A média geral do consumo foi: "<<mediaConsumo;

  return 0;
}