#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int matrizA[6][5], matrizB[6][5];

    cout << "Digite os elementos da matriz A (6x5):\n";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrizA[i][j] % 2 == 0) {
                matrizB[i][j] = matrizA[i][j] + 5;
            } else {
                matrizB[i][j] = matrizA[i][j] - 4;
            }
        }
    }

    cout << "\nMatriz A:\n";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriz B:\n";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}