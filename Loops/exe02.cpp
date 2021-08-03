#include <iostream>
using namespace std;
int main() {
  float altura, menorA = 0, maiorA = 0, mediaA=0, somaA=0; 
  string sexo;
  int contador=1, qtdH=0, qtdM=0;

  while(contador <= 50){
    cout<<"Digite sua altura: ";
    cin>>altura;
    cout<<"Digite seu sexo: ";
    cin>>sexo;



  //Se o valor do 1 for igual a 1, representa a 1° altura informada, assim ela é a maior e a menor ao mesmo tempo
    if (contador == 1){
      maiorA = altura;
      menorA = altura;
    } else{
      if(maiorA < altura){
        maiorA = altura;
      } else if (menorA > altura){
        menorA = altura;
      }
    }
    
  

    if(sexo == "Feminino" || sexo == "feminino" || sexo == "f" || sexo == "F"){
      somaA += altura;
      qtdM += 1;
    } else{
      qtdH += 1;
    }
      
    contador += 1;
    
  }

  cout<<"Maior altura: "<<maiorA<<endl;
  cout<<"Menor altura: "<<menorA<<endl;
  cout<<"A média das alturas das mulheres é: "<<somaA/qtdM<<endl;
  cout<<"O número de homens é: "<<qtdH<<endl;

  return 0;
}