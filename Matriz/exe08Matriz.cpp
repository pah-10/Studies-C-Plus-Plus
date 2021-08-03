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

  soma = matriz[0][1] + matriz[0][2] + matriz[1][2];

  cout<<"A soma dos elementos acima da diagonal principa da matriz é: "<<soma;

return 0;
}