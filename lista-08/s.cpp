#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int A[5][6], B[5][6], C[5][6];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            int valor;
            do {
                cout << "Digite um valor par para A[" << i << "][" << j
                     << "]: ";
                cin >> valor;
            } while (valor % 2 != 0);
            A[i][j] = valor;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            int valor;
            do {
                cout << "Digite um valor ímpar para B[" << i << "][" << j
                     << "]: ";
                cin >> valor;
            } while (valor % 2 == 0);
            B[i][j] = valor;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Matriz C (Soma de A e B):\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}