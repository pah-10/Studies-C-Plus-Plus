#include <iostream>

using namespace std;

void converteSegundos(int seg, int *horas, int *minutos, int *segundos) {
    *horas = seg / 3600;
    seg %= 3600;
    *minutos = seg / 60;
    *segundos = seg % 60;
}

int main() {
    int segundos, h, m, s;

    cout << "Digite o valor da fabricação em segundos: ";
    cin >> segundos;

    converteSegundos(segundos, &h, &m, &s);

    cout << "Fabricação: " << h << ":" << m << ":" << s << endl;

    return 0;
}