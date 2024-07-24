#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double A[8][6];
    double B[8] = {0};

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 6; j++) {
            cout << "Digite o elemento A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
            B[i] += A[i][j];
        }
    }

    cout << "Matriz B (soma de cada linha de A): ";
    for (int i = 0; i < 8; i++) {
        cout << B[i] << " ";
    }

    double somatorio = 0;
    for (int i = 0; i < 8; i++) {
        somatorio += B[i];
    }

    cout << "\nSomatório dos elementos da matriz B: " << somatorio << endl;

    return 0;
}