#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double matriz[5][5];
    double somaDiagonal = 0.0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Digite o valor para A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
            if (i == j) {
                somaDiagonal += matriz[i][j];
            }
        }
    }

    cout << "O somatório dos elementos da diagonal principal é: "
         << somaDiagonal << endl;

    return 0;
}