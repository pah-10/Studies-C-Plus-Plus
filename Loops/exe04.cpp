#include <iostream>
using namespace std;

int main() {
    int cod, l10 = 0, l1020 = 0, l20 = 0;
    float pc, pv, l, lt = 0, pct = 0, pvt = 0;

    cout << "Digite o C�digo: ";
    cin >> cod;

    while(cod != 0) {
        
        cout << "Digite o pre�o da compra: ";
        cin >> pc;
        cout << "Digite o pre�o da venda: ";
        cin >> pv;

        l = pv - pc;

        if(l < pc*0.1)
            l10++;
        else if(l <= pc*0.2)
            l1020++;
        else 
            l20++;
        
        pvt += pv;
        pct += pc;
        lt += l;

        cout << "Digite o C�digo: ";
        cin >> cod;
    }

    cout << "Quantidade de mercadorias que tiveram o lucro < 10%: " << l10 << endl;
    cout << "Quantidade de mercadorias que tiveram o lucro >= 10% e <= 20%: " << l1020 << endl;
    cout << "Quantidade de mercadorias que tiveram o lucro > 20%: $" << l20 << endl;
    cout << "Lucro total: $" << lt << endl;
    cout << "Pre�o total das compras : $" << pct << endl;
    cout << "Pre�o total das vendas: $" << pvt << endl;

    return 0;
}