#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int matrizA[7][7];
    int totalPares = 0;

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cout << "Digite o valor para matrizA[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];

            if (matrizA[i][j] % 2 == 0) {
                totalPares++;
            }
        }
    }

    cout << "Total de elementos pares na matriz: " << totalPares << endl;

    return 0;
}