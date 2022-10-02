#include <iostream>
#define qtd 4
using namespace std;
int main() {
  float a1[qtd][qtd] = {0}, b2[qtd][qtd] = {0}, c3[qtd][qtd] = {0};

  cout << "--- Matriz 1 --- " << endl;
  for(int i = 0; i < qtd; i++){
    for(int j = 0; j < qtd; j++){
        cout<<"Digite um valor da 1° matriz:"<<endl;
        cin>>a1[i][j];
    }
  } 
    cout << "--- Matriz 2 --- " << endl;
    for(int i = 0; i < qtd; i++){
        for(int j = 0; j < qtd; j++){
            cout<<"Digite um valor da 2° matriz:"<<endl;
            cin>>b2[i][j];
        }
    }

    cout<<"========================="<<endl;
    cout<<"RESULTADO DAS COMPARAÇÕES:"<<endl;
    for (int i = 0; i < qtd; i++){
      for (int j = 0; j < qtd; j++){
        if (a1[i][j] > b2[i][j]){
          c3[i][j] = a1[i][j];
        }else{
           c3[i][j] = b2[i][j];
        } 
      }
    }

    for(int i = 0; i < qtd; i++){
      for(int j = 0; j < qtd; j++){
        cout << c3[i][j] << "\t";
      }
      cout<<endl;
    }

  return 0;
}