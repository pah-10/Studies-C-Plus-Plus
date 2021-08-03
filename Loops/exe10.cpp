#include <iostream>
using namespace std;
int main() {
  int numCanal = 1, pessoas = 0, canal4 = 0, canal5 = 0, canal7 = 0, canal12 = 0, totalPessoas = 0, canalI = 0, canal0 = 0;
  float porcent4 = 0, porcent5 = 0, porcent7 = 0, porcent12 = 0;


  while(numCanal != 0){

    cout<<"Qual o número do canal? "<<endl;
    cin >>numCanal;

    if(numCanal != 0){

    cout<<"Quantas pessoas estavam assistindo? "<<endl;
    cin >>pessoas;

    switch (numCanal){
      case (4):
        canal4 = canal4+ pessoas;
      break;

      case (5):
        canal5 = canal5+ pessoas;
      break;

      case (7):
        canal7 = canal7+ pessoas;
      break;

      case (12):
        canal12 = canal12+ pessoas;
      break;

      default:
      cout<<"Canal incompatível com a pesquisa informado \n FIM DA PESQUISA"<<endl<<endl;
      //canal incompatível recebe o valor da var pessoas
      canalI = pessoas;
      //como um canal incompatível é informado a var num canal assumo o valor do flag pra encerrar o programa
      numCanal = 0;
      //a var total de pessoas é subtraída pelo valor da var canalImcompatível para não atrapalhar no calculo das porcentagens 
      totalPessoas -= canalI;
    }
  } else {
    cout<<"Canal 0 informado \n FIM DA PESQUISA"<<endl<<endl;
    ///canal 0 recebe o valor da var pessoas
    canal0 = pessoas;
    //a var total de pessoas é subtraída pelo valor da var canal 0 para não atrapalhar no calculo das porcentagens 
    totalPessoas -= canal0;
  }

/*
    if(numCanal == 4){
        canal4 = canal4+ pessoas;
    }else if (numCanal == 5){
        canal5 = canal5 + pessoas;
    }else if (numCanal == 7){
        canal7 = canal7 + pessoas;
    }else if (numCanal == 12){
        canal12+= canal12 + pessoas;
    }else {
        cout<<" pesquisa"<<endl;
        numCanal = 0;
    }*/

    totalPessoas += pessoas;
  }

  //calculo das porcentagens
  porcent4 = (canal4*100)/totalPessoas;
  porcent5 = (canal5*100)/totalPessoas;
  porcent7 = (canal7*100)/totalPessoas;
  porcent12 =(canal12*100)/totalPessoas;

  cout<<"A audiencia do canal 4 é: "<<porcent4<<"%"<<endl;
  cout<<"A audiencia do canal 5 é: "<<porcent5<<"%"<<endl;
  cout<<"A audiencia do canal 7 é: "<<porcent7<<"%"<<endl;
  cout<<"A audiencia do canal 12 é: "<<porcent12<<"%"<<endl;

  return 0;
}