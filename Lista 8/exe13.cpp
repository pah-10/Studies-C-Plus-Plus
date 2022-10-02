#include <iostream>
using namespace std;

void ordem (int v1, int v2, int v3){

	cout<<"----ORDENAÇÃO DOS 3 VALORES----"<<endl;

	if(v1 < v2 &&  v1 < v3){
		cout<<v1<<endl;
		if(v2 < v3){
			cout<<v2<<endl<<v3;
		}else{
			cout<<v3<<endl<<v2;
		}
	}

	if(v2 < v1 &&  v2 < v3){
		cout<<v2<<endl;
		if(v1 < v3){
			cout<<v1<<endl<<v3;
		}else{
			cout<<v3<<endl<<v1;
		}
	}

	if(v3 < v1 &&  v3 < v2){
		cout<<v3<<endl;
		if(v1 < v2){
			cout<<v1<<endl<<v2;
		}else{
			cout<<v2<<endl<<v1;
		}
	}
}

int main() {
	int v_1, v_2, v_3;

	cout<<"Digite um valor: ";
	cin>>v_1;
	cout<<"Digite um valor: ";
	cin>>v_2;
	cout<<"Digite um valor: ";
	cin>>v_3;

	ordem (v_1, v_2, v_3);

  return 0;
}