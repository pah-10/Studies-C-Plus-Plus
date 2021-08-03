#include <iostream>
using namespace std;
int main() {
    int A[10][10] = {0};

    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            if(i < j)
                A[i][j] = 2*i + 7*j - 2;
            else {
                if(j > i)
                    A[i][j] = 4*i*i*i - 5*j*j + 1;
                else
                    A[i][j] = 3*i*i - 1;
            }

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++)
            cout << A[i][j] << "\t\t";
        cout << endl;
    }

    return 0;
}