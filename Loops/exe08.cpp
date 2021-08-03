#include <iostream>
using namespace std;
int main() {
  char sexoE, resposta;
  float qtdPessoas = 0, qtdFem = 0, qtdMas = 0, femininoSim=0, masculinoNao = 0, qtdRespostaS = 0, qtdRespostaN = 0, porcentagemS = 0, porcentagemN = 0;

  while (qtdPessoas < 2000){

    cout<<"Qual o sexo do entrevistado? (Responda com F ou M) "<<endl;
    cin>>sexoE;
    cout<<"Qual foi a resposta da pergunta? \n Escreva S para sim \n Escreva N para não"<<endl;
    cin>>resposta;

    //verifica o sexo da pessoas
    if(sexoE == 'f' || sexoE == 'F'){
      qtdFem = qtdFem + 1;
      //verifica quantas mulheres responderam sim
      if(resposta == 's' || resposta == 'S'){
        femininoSim = femininoSim + 1;
      }
    }else{
      qtdMas = qtdMas + 1;
      //verifica quantos homes responderam nao
      if(resposta == 'n' || resposta == 'N'){
        masculinoNao = masculinoNao + 1;
      }
    }

    //quantas respostas sim e não teve
    if(resposta == 's' || resposta == 'S' ){
      qtdRespostaS = qtdRespostaS + 1;
    }else{
      qtdRespostaN = qtdRespostaN + 1;
    }

    qtdPessoas = qtdPessoas + 1;
  }//fim while

  porcentagemS= (femininoSim * 100)/qtdFem;
  porcentagemN =(masculinoNao * 100)/qtdMas;

  cout<<endl;
  cout<< "Quantidade de respostas sim: " << qtdRespostaS << endl;
  cout<< "Quantidade de respostas não: " << qtdRespostaN << endl;
  cout<<"Pessoas do sexo feminino que responderam sim: "<<porcentagemS<<"%"<<endl;
  cout<<"Pessoas do sexo masculino que responderam não: "<<porcentagemN<<"%"<<endl;

  return 0;
}