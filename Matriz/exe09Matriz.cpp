#include <iostream>
using namespace std;
int main(){
  int matriz[3][3], soma = 0;

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      cout<<"Digite o numero "<<endl;
      cin>>matriz[i][j];
    }
  }

  soma = matriz[1][0] + matriz[2][0] + matriz[2][1];

  cout<<"A soma dos elementos abaixo da diagonal principa da matriz é: "<<soma;

return 0;
}