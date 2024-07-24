#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int matriz[15][15];
    int soma = 0;

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 15; i++) {
        if (matriz[i][i] % 2 == 0) {
            soma += matriz[i][i];
        }
    }

    cout << "A soma dos elementos pares na diagonal principal é: " << soma
         << endl;

    return 0;
}