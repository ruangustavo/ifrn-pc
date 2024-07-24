#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int A[5][5], B[5][5];

    cout << "Digite os elementos da matriz A (5x5):\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                B[i][j] = 3 * A[i][j];
            } else {
                B[i][j] = 2 * A[i][j];
            }
        }
    }

    cout << "Matriz B resultante:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}