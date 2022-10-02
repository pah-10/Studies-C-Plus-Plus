#include <iostream>
using namespace std;
int main() {
  int matricula, nota1, nota2, nota3, frequencia, aluno = 0, reprovados = 0, reproM = 0, reprovF=0, reproMF = 0, porcentFre = 0;
  string passou;
  float notaF = 0, notaT= 0, notaMT = 0, maiorNT = 0, menorNT = 0;

  while(aluno < 100){
    cout<<"Digite o número da matricula do aluno(a): "<<endl;
    cin>>matricula;
    cout<<"Digite a nota da 1° prova: "<<endl;
    cin>>nota1;
    cout<<"Digite a nota da 2° prova: "<<endl;
    cin>>nota2;
    cout<<"Digite a nota da 3° prova: "<<endl;
    cin>>nota3;
    cout<<"O aluno(a) frequentou a quantas aulas?"<<endl;
    cin>>frequencia;

    //Defini a media/nota final
    notaF = (nota1 + nota2 + nota3)/3;

    //a nota da turma vai receber e somar todas as medias da turma
    notaT += notaF;

    //define a menor e a maior nota dos alunos

    //add a primeira nota como a maior e a menor, depois verifica por ela

    if (aluno == 0){
      maiorNT = notaF;
      menorNT = notaF;
    }else if(notaF > maiorNT){
      maiorNT = notaF;
    } else if (notaF < menorNT) {
      menorNT = notaF;
    }

    //Verifica a nota média da turma
    notaMT = notaT/100;

    //Verifica se o aluno foi reprovado por nota e falta, só por nota ou só por falta. Senão o aluno foi aprovado
    if ((notaF < 60)  && (frequencia < 40)){
      passou = "reprovado(a)";
      reproMF += 1;
    }else if ((notaF < 60)  && (frequencia > 40)){
      passou = "reprovado(a) pela nota";
      reproM += 1;
    } else if ((notaF > 60 || notaF <= 60)  && (frequencia < 40)){
      passou = "reprovado(a) pela frequência";
      reprovF += 1;
    } else{
      passou = "aprovado(a)";
    }

    //a var reprovados soma a qtd de reprovados por nota, frequencia e por ambos
    reprovados = reproMF + reproM + reprovF;

    //soma aluno mais 1 para ir para o proximo
    aluno += 1;

    //% de alunos reprovados por frequencia
    porcentFre = ((reprovF + reproMF)*100)/100;

      cout<<"O aluno(a) "<<matricula<<" frequentou "<<frequencia<<" aulas. Teve a nota final igual a "<<notaF<<" e foi "<<passou<< endl;
  }//fim do while

  cout<<endl<<endl;

  cout<<"A maior nota da turma foi: "<<maiorNT<<endl;
  cout<<"A menor nota da turma foi: "<<menorNT<<endl;
  cout<<"A nota média da turma foi: "<<notaMT<<endl;
  cout<<"A turma teve "<<reprovados<<" alunos reprovados"<<endl;
  cout<<porcentFre<<"% reprovados por frequencia";

  return 0;
}