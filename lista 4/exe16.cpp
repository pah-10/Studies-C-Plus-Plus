#include <iostream>
using namespace std;
int main() {
  int numInscri = 1, idade, qtdM = 0, qtdH = 0, mais45 = 0, menos35Xp = 0, candidata = 0, menorI = 0;
  float mediaH = 0;
  string sexo, experi;

  do{
    cout<<"Informe o número de inscrição do candidato: "<<endl;
    cin>>numInscri;

    if(numInscri >= 0){

      cout<<"Qual a idade dela(e)?"<<endl;
      cin>>idade;
      cout<<"Qual o sexo? (Digite 'Feminino' ou 'Masculino') "<<endl;
      cin>>sexo;
      cout<<"Possui experiência? (Digite 'Sim' ou 'Não')"<<endl;
      cin>>experi;

    //Determina se o sexo é feminino
      if(sexo == "Feminino" || sexo == "feminino" || sexo == "F" || sexo == "f"){
        qtdM += 1;

        //Se a 1° mulher tem experiência
          if((qtdM == 1) && (experi == "Sim" || experi == "sim" || experi == "S" || experi == "s")){
            menorI = idade;

            //verifica se a 1° mulher com experiencia tem menos que 35 anos
              if(idade < 35){
                menos35Xp += 1;
              }
          }//Se não for a 1° mulher 
            else{

            //verifica se a idade é menor que a menor idade
              if (idade < menorI){
                menorI = idade;
              }
            //verifica se a idades das mulheres que n são a 1° é maior que 25
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
      cout<<"ERROR \nNúmero de inscrição menor que 0 informado"<<endl;
      numInscri = -1;
    }

  }while(numInscri != 0);

  mediaH = mais45/qtdH;

  cout<<endl;
  cout<<"Existe "<<qtdM<<" candidata(s) "<<endl;
  cout<<"Existe "<<qtdH<<" candidato(s)"<<endl;
  cout<<"Média entre as idades dos homens maiores que 45 anos: "<<mediaH<<" anos"<<endl;
  cout<<menos35Xp<<" mulhere(s) possue(m) idade(s) menor(e)s que 35 anos e experiência"<<endl;
  cout<<"A menor idade entre as mulheres com experiência é: "<<menorI<<" anos";

  return 0;
}