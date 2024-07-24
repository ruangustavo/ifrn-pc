#include <cmath>
#include <iostream>
using namespace std;

int fatorial(int n) { return (n == 1 || n == 0) ? 1 : n * fatorial(n - 1); }

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int A[10];
    int C[10][3];

    cout << "Digite os 10 elementos da matriz A:\n";
    for (int i = 0; i < 10; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 10; i++) {
        C[i][0] = A[i] + 5;
        C[i][1] = fatorial(A[i]);
        C[i][2] = pow(A[i], 2);
    }

    cout << "\nMatriz C:\n";
    for (int i = 0; i < 10; i++) {
        cout << C[i][0] << "\t" << C[i][1] << "\t" << C[i][2] << "\n";
    }

    return 0;
}