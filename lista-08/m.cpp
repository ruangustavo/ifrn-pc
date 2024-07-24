#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double matriz[5][5];
    double soma = 0;

    cout << "Digite os elementos da matriz 5x5:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matriz[i][j];
        }
    }

    soma = matriz[0][0] + matriz[2][2] + matriz[4][4];

    cout << "A soma dos elementos das posições de linha e coluna ímpares da "
            "diagonal principal é: "
         << soma << endl;

    return 0;
}