#include <iostream>
using namespace std;
int main() {
  int numInscri = 1, idade, qtdM = 0, qtdH = 0, mais45 = 0, menos35Xp = 0, candidata = 0, menorI = 0;
  float mediaH = 0;
  string sexo, experi;

  do{
    cout<<"Informe o n�mero de inscri��o do candidato: "<<endl;
    cin>>numInscri;

    if(numInscri >= 0){

      cout<<"Qual a idade dela(e)?"<<endl;
      cin>>idade;
      cout<<"Qual o sexo? (Digite 'Feminino' ou 'Masculino') "<<endl;
      cin>>sexo;
      cout<<"Possui experi�ncia? (Digite 'Sim' ou 'N�o')"<<endl;
      cin>>experi;

    //Determina se o sexo � feminino
      if(sexo == "Feminino" || sexo == "feminino" || sexo == "F" || sexo == "f"){
        qtdM += 1;

        //Se a 1� mulher tem experi�ncia
          if((qtdM == 1) && (experi == "Sim" || experi == "sim" || experi == "S" || experi == "s")){
            menorI = idade;

            //verifica se a 1� mulher com experiencia tem menos que 35 anos
              if(idade < 35){
                menos35Xp += 1;
              }
          }//Se n�o for a 1� mulher 
            else{

            //verifica se a idade � menor que a menor idade
              if (idade < menorI){
                menorI = idade;
              }
            //verifica se a idades das mulheres que n s�o a 1� � maior que 25
              if(idade < 35){
                menos35Xp += 1;
              }
            }

      }//qtd de homes
      else{
        qtdH += 1;

      //qtd de homens com menos de 45 anos
        if(idade > 45){
          mais45 += idade;
        }
      }


    } else{ 
      cout<<"ERROR \nN�mero de inscri��o menor que 0 informado"<<endl;
      numInscri = -1;
    }

  }while(numInscri != 0);

  mediaH = mais45/qtdH;

  cout<<endl;
  cout<<"Existe "<<qtdM<<" candidata(s) "<<endl;
  cout<<"Existe "<<qtdH<<" candidato(s)"<<endl;
  cout<<"M�dia entre as idades dos homens maiores que 45 anos: "<<mediaH<<" anos"<<endl;
  cout<<menos35Xp<<" mulhere(s) possue(m) idade(s) menor(e)s que 35 anos e experi�ncia"<<endl;
  cout<<"A menor idade entre as mulheres com experi�ncia �: "<<menorI<<" anos";

  return 0;
}