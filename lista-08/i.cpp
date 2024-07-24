#include <cmath>
#include <iostream>
using namespace std;

int fatorial(int n) { return (n == 1 || n == 0) ? 1 : n * fatorial(n - 1); }

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int A[7][7], B[7][7];

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cout << "Digite o valor para A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (i % 2 == 0 && i == j) {
                B[i][j] = fatorial(A[i][j]);
            } else {
                int soma = 0;
                for (int k = 1; k <= A[i][j]; k++) {
                    soma += k;
                }
                B[i][j] = soma;
            }
        }
    }

    cout << "Matriz B:" << endl;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}