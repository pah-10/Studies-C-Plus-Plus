#include <iostream>

using namespace std;

float calcula_media(float nota1, float nota2, float nota3, char opcao) {
    if(opcao == 'A')
        return (nota1 + nota2 + nota3) / 3;
    if(opcao == 'P')
        return (nota1*5 + nota2*3 + nota3*2) / 10;
    if(opcao == 'H')
        return 3 / (1/nota1 + 1/nota2 + 1/nota3);
    return -1;
}

int main() {
    float n1, n2, n3, md;
    char op;

    cout << "N1: ";
    cin >> n1;
    cout << "N2: ";
    cin >> n2;
    cout << "N3: ";
    cin >> n3;
    cout << "Opcao de cálculo ([A]ritmética, [P]onderada, [H]armonica: ";
    cin >> op;

    md = calcula_media(n1, n2, n3, op);

    cout << "A média do aluno é " << md << endl;

    return 0;
}