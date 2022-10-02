#include <iostream>
using namespace std;
int main() {
  int qtdA, numMatricula = 0, contadorTurmas=0,  turmasM5=0, qtdAusencia=0, qtdPresenca = 0, contadorTAusencia, numerodeA = 0; 
  char IdTurma, chamada;
  float porcentagem = 0;

  while(contadorTurmas != 2){

    cout<<"Identifique a turma (letras): "<<endl;
    cin>>IdTurma;
    cout<<"Quantos alunos estão matriculados nela? "<<endl;
    cin>>qtdA;

    numerodeA = qtdA;
      while (numerodeA != 0){
        
        cout<<"Qual o número da matrícula do aluno(a)? "<<endl;
        cin>>numMatricula;
        cout<<"Se o aluno estivesse presente no exame escreva 'P', senão escreva 'A' "<<endl;
        cin>>chamada;

        if(chamada == 'A' || chamada == 'a'){
          qtdAusencia += 1;
        } else {
          qtdPresenca += 1;
        }
        
        numerodeA -= 1;
      }

    porcentagem = (qtdAusencia*100)/qtdA;

    cout<<endl;
    cout<<"A porcentagem de ausencia na sala "<< IdTurma<<" é: "<<porcentagem<<"%"<<endl<<endl;;

    if (porcentagem > 5){
      turmasM5 += 1;
    }

   contadorTurmas += 1; 
}
  cout<<endl;
  cout<<"Quantidade de turmas com ausencia maior que 5%: "<<turmasM5;
  
  return 0;
}