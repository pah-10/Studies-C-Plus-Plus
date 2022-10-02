#include <iostream>
using namespace std;
int main() {
  int alunos[10]; 
  float altura[10], maior, menor, menorA, maiorA;

  for(int i = 0; i < 10; i++){
    cout<<"Digite o número do aluno:"<<endl;
    cin>>alunos[i];
    cout<<"Digite a altura da aluno:"<<endl;
    cin>>altura[i];

    if(i == 0){
      maior = altura[i];
      menor = altura[i]; 
      maiorA = alunos[i];
      menorA = alunos[i];
    } else{
      if(maior < altura[i]){
        maior = altura[i];
        maiorA = alunos[i];
      } else if(menor > alunos[i]){
        menor = altura[i];
        menorA = alunos[i];
      }
    }
  }

  cout<<"==========================================="<<endl;
  cout<<"O aluno mais baixo é o aluno "<<menorA<<", com "<<menor<<" de altura"<<endl;
  cout<<"O aluno mais alto é o aluno "<<maiorA<<", com "<<maior<<" de altura"<<endl;
  
  return 0;
}