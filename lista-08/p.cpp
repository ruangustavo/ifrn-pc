#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int matriz[10][7];
    int pares = 0, impares = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 7; j++) {
            cout << "Digite o valor para a posição [" << i << "][" << j
                 << "]: ";
            cin >> matriz[i][j];

            if (matriz[i][j] % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    }

    int totalElementos = 10 * 7;
    double percentualPares = pares / totalElementos * 100;
    double percentualImpares = impares / totalElementos * 100;

    cout << "Total de elementos pares: " << pares << endl;
    cout << "Total de elementos ímpares: " << impares << endl;
    cout << "Percentual de elementos pares: " << percentualPares << "%" << endl;
    cout << "Percentual de elementos ímpares: " << percentualImpares << "%"
         << endl;

    return 0;
}