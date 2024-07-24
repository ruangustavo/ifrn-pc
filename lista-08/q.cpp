#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int A[4][5], B[4] = {0}, C[5] = {0};
    int somaB = 0, somaC = 0;

    cout << "Digite os 20 valores inteiros da matriz A de duas dimensões:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> A[i][j];
            B[i] += A[i][j];
            C[j] += A[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        somaB += B[i];
    }

    for (int j = 0; j < 5; j++) {
        somaC += C[j];
    }

    cout << "Soma dos elementos da matriz B: " << somaB << endl;
    cout << "Soma dos elementos da matriz C: " << somaC << endl;
    cout << "Soma total: " << somaB + somaC << endl;

    return 0;
}