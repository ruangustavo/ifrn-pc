#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int A[5][5], B[5][5], C[5][5];

    int total = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            A[i][j] = total;
            while (A[i][j] % 3 == 0) {
                total++;
                A[i][j] = total;
            }
            total++;
        }
    }

    total = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            B[i][j] = total;
            while (B[i][j] % 6 == 0) {
                total++;
                B[i][j] = total;
            }
            total++;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Matriz C (soma de A e B):" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}