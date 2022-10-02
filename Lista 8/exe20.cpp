#include <iostream>
using namespace std;

void tabuada (float qtd){
	cout<<endl<<"----TABUADA DO "<<qtd<<"----"<<endl;

	for(int i = 1; i <= qtd; i++){
		cout<<"\t"<<i<<" X "<<qtd<<" = "<<(i * qtd)<<endl;
	}
}

int main() {
	float N = 0;

	cout<<"Digite um número para N: ";
	cin>>N;

	tabuada(N);

  return 0;
}