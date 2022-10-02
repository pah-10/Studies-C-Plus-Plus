#include <iostream>
using namespace std;

float calc_volume(float raio) {
	return 4.0/3 * raio*raio*raio;
}

int main() {
	float r, v;
    
	cout << "Digite o raio da esfera: ";
    cin >> r;

    v = calc_volume(r);

    cout << "O volume é: " << v << endl;
    return 0;
}