#include <iostream>
using namespace std;

int fatorial(int n) { return (n == 1 || n == 0) ? 1 : n * fatorial(n - 1); }

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int A[5][4];
    int B[5][4];

    cout << "Digite os elementos da matriz A (5 linhas x 4 colunas):" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            B[i][j] = fatorial(A[i][j]);
        }
    }

    cout << "Matriz A:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz B (fatoriais):" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}