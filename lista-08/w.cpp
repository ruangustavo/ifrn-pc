#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int matrizA[5][5], matrizB[5][5];

    cout << "Digite os valores da matriz A:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i + j == 4) {
                matrizB[i][j] = matrizA[i][j] * 3;
            } else {
                matrizB[i][j] = matrizA[i][j] * 2;
            }
        }
    }

    cout << "Matriz B:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}