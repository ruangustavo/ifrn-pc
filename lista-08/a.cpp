#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int A[5][3], B[5][3], C[5][3];

    cout << "Digite os valores da matriz A:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Digite os valores da matriz B:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Matriz C (A + B):\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}