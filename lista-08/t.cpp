#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int A[4][5], B[4][5], C[4][5];

    int num = 12;  // 12 é o primeiro número divisível por 3 e 4
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            while (num % 3 != 0 || num % 4 != 0) {
                num++;
            }
            A[i][j] = num;
            num++;
        }
    }

    num = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            while (num % 5 != 0 && num % 6 != 0) {
                num++;
            }
            B[i][j] = num;
            num++;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Matriz C (A - B):" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}