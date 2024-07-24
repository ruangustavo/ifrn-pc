#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int fatorial(int n) { return (n == 1 || n == 0) ? 1 : n * fatorial(n - 1); }

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int A[4], B[4], C[4], D[4];
    int E[4][4];

    cout << "Digite os elementos da matriz A: ";
    for (int i = 0; i < 4; i++) {
        cin >> A[i];
    }

    cout << "Digite os elementos da matriz B: ";
    for (int i = 0; i < 4; i++) {
        cin >> B[i];
    }

    cout << "Digite os elementos da matriz C: ";
    for (int i = 0; i < 4; i++) {
        cin >> C[i];
    }

    cout << "Digite os elementos da matriz D: ";
    for (int i = 0; i < 4; i++) {
        cin >> D[i];
    }

    for (int i = 0; i < 4; i++) {
        E[0][i] = 2 * A[i];
        E[1][i] = 3 * B[i];
        E[2][i] = 4 * C[i];
        E[3][i] = fatorial(D[i]);
    }

    cout << "Matriz E:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; ++j) {
            cout << E[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}