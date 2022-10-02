#include <iostream>
using namespace std;
 
void triangulos(float ladoX, float ladoY, float ladoZ){

  if(((ladoY - ladoZ) < ladoX) && (ladoX < (ladoY + ladoZ))){
    if((ladoX == ladoY) && (ladoX == ladoZ)){
      cout<<"É um triangulo equilatero";
    }else if((ladoX != ladoY) && (ladoX != ladoZ)){
        cout<<"É um triangulo escaleno!";
    }else{
      cout<<"É um triangulo isosceles!";
    }
  }else{
    cout<<"Não é um triangulo!";
  }
}

int main(){
  float X, Y, Z;

  cout<<"Entre com os valores dos 3 lados: "<<endl;
  cin>>X>>Y>>Z;

	triangulos(X, Y, Z);
   
  return 0;
}