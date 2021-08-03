#include <iostream>

using namespace std;

int main() {
  float centigrados, farenheit = 50;

  cout<<"|\tCentigrados\t|\tFarenheit\t|"<<endl<<endl;

  while (farenheit <= 150){

    //formula da conversão de farenheit em centigrados
    centigrados = (farenheit-32)*5/9;

    cout<<"|\t"<<centigrados<<"\t|\t"<<farenheit<<"\t|"<<endl;

    farenheit += 1;
  }

  return 0;
}