#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double A[4][5], B[4][5];

    cout << "Digite os valores das temperaturas em graus Celsius:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> A[i][j];
            B[i][j] = A[i][j] * 9 / 5 + 32;
        }
    }

    cout << "Matriz A (Celsius):" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Matriz B (Fahrenheit):" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}