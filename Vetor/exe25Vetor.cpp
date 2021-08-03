#include <iostream>
using namespace std;
int main() {
  int a[100];
  
  for(int i = 0; i <= 100; i++){
    a[i]= i;
  }

  for(int i = 0; i <= 100; i++){
    if(a[i] % 7 != 0 && ((a[i] - 10 != 7) && (a[i] - 20 != 7) && (a[i] - 30 != 7) && (a[i] - 40 != 7) && (a[i] - 50 != 7) && (a[i] - 60 != 7) && (a[i] - 70 != 7) && (a[i] - 80 != 7) && (a[i] - 90 != 7))){
      cout<<a[i]<<"\t";
    }
  }
  return 0;
}