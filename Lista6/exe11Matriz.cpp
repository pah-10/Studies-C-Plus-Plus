#include <iostream>
using namespace std;
int main(){
  int matriz[3][3], soma = 0;
	for(int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout<<"Digite um número "<<endl;
			cin>>matriz[i][j];
		}
	}

	for(int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if (i + j == i + 1){
       			soma += matriz[i][j];
     			 }
   		 }
	}

  	cout<<"A soma dos elementos da diagonal secundária é "<<soma<<endl;

	return 0;
}