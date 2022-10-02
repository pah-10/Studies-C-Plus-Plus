#include <iostream>
using namespace std;
int main() {
    int d1, d2, m1, m2, a1, a2, dias = 0;

    cout << "Digite o dia da 1° data: "<<endl;
    cin >> d1;
    cout << "Digite o mês da 1° data: "<<endl;
    cin >> m1;
    cout << "Digite o ano da 1° data: "<<endl;
    cin >> a1;

    cout << "Digite o dia da 2° data: "<<endl;
    cin >> d2;
    cout << "Digite o mês da 2° data: "<<endl;
    cin >> m2;
    cout << "Digite o ano da 2° data: "<<endl;
    cin >> a2;

    if(a1 == a2) {
        if(m1 != m2) {
            for(int m = m1; m < m2; m++) {
                if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
                    dias += 31;
                else {
                    if(m == 2) {
                        if(a1 % 400 == 0 || (a1 % 4 == 0 && a1 % 100 != 0))
                            dias += 29;
                        else
                            dias += 28;
                    }
                    else
                        dias += 30;
                }
            }
            dias -= d1;
            dias += d2;
        }
        else {
            dias = d2 - d1;
        }
    }
    else {
        // [m1,12]
        for(int m = m1; m <= 12; m++) {
            if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
                dias += 31;
            else {
                if(m == 2) {
                    if(a1 % 400 == 0 || (a1 % 4 == 0 && a1 % 100 != 0))
                        dias += 29;
                    else
                        dias += 28;
                }
                else
                    dias += 30;
            }
        }
        // [1,m2)
        for(int m = 1; m < m2; m++) {
            if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
                dias += 31;
            else {
                if(m == 2) {
                    if(a1 % 400 == 0 || (a1 % 4 == 0 && a1 % 100 != 0))
                        dias += 29;
                    else
                        dias += 28;
                }
                else
                    dias += 30;
            }
        }
        dias -= d1;
        dias += d2;
        
        if(a2 - a1 > 1)
            for(int a = a1+1; a < a2; a++) {
                if(a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))
                    dias += 366;
                else
                    dias += 365;
            }
    }

    cout << "Existe " << dias << " dias entre as datas." << endl;

    return 0;
}