#include <iostream>
using namespace std;
int main() {
  float nota[15], soma = 0;

  for(int i = 0; i < 15; i++){
    cout<<"Digite a nota do(a) aluno(a)"<<endl;
    cin>>nota[i];
    soma += nota[i];
  } 

  cout<<"=========================="<<endl;
  cout<<"A m�dia geral das notas dos alunos �: "<<(soma/15);
  return 0;
}