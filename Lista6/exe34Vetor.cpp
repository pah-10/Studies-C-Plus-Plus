#include <iostream>
#define qtd 10
using namespace std;
int main(){
  float num, existe, a[qtd], i = 0;
  
  while(i < qtd){       
    cout<<"Digite um valor"<<endl;        
    cin>>num;        
  
    for(int n = existe = 0; n < i; n++)    
      if(a[n] == num){
        existe = 1; 
      }       
      if(existe){         
        cout<<"o valor "<<num<<" ja existe"<<endl<<endl;  
      }else{          
        a[i++] = num; 
      }   
    }  

    cout<<"========================="<<endl;
    cout<<"Valores armazenados no vetor:"<<endl;   

    for(int i = 0; i < qtd; i++){ 
      if(i != 9){      
        cout<<a[i]<<", "; 
      } else{
        cout<<a[i]<<"."; 
      }
    }  
      return 0;
}