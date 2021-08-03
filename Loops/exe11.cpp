#include <iostream>
using namespace std;
int main() {
  float cod = 1, numV, numCandM, numCandF, CandPC = 0, porVaga = 0, porcentagemF, maiorNumVaga = 0, maiorCod = 0, totalCand = 0;

  while (cod != 0){

    cout<<"Informe o código do curso: "<<endl;
    cin>>cod;

    if(cod != 0){
      cout<<"Informa o número de vagas do curso: "<<endl;
      cin>>numV;
      cout<<"Quantos candidatos possuem o sexo masculino? "<<endl;
      cin>>numCandM;
      cout<<"Quantos candidatos possuem o sexo feminino? "<<endl;
      cin>>numCandF;

      CandPC = numCandM + numCandF;
      porVaga = CandPC/numV;

      porcentagemF = (numCandF*100)/CandPC;

      if(porVaga > maiorNumVaga){
        maiorNumVaga = porVaga;
        maiorCod = cod;
      }

      totalCand += CandPC;
      
      cout<<endl;
      cout<<"O curso "<<cod<<" tem "<< porVaga<< " candidatos por vaga e entre eles "<<porcentagemF<<"% são do sexo feminino"<<endl<<endl;
    } 
  }

  cout<<endl;
  cout<<"O vestibular teve um total de "<<totalCand<<" candidatos inscritos para as vagas";

  return 0;
}