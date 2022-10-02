#include <iostream>
#include <cmath>
using namespace std;

void eq2grau(float a, float b, float c, float *x1, float *x2) {
    float delta = b*b - 4*a*c;

    *x1 = (-b + sqrt(delta)) / (2*a);
    *x2 = (-b - sqrt(delta)) / (2*a);
}

int main() {
    float x_1 = 0, x_2 = 0, a, b, c;

    cout<<"Digite o valor do a: ";
		cin>>a;
		cout<<"Digite o valor do b: ";
		cin>>b;
		cout<<"Digite o valor do c: ";
		cin>>c;

    eq2grau(a, b, c, &x_1, &x_2);

    cout << "Depois da função" << endl << x_1 << endl << x_2 << endl;

    return 0;
}