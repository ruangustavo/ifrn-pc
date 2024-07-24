#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int A[7], B[7], C[7][2];

    cout << "Digite os elementos da matriz A:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> A[i];
    }

    cout << "\nDigite os elementos da matriz B:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> B[i];
    }

    for (int i = 0; i < 7; i++) {
        C[i][0] = A[i];
        C[i][1] = B[i];
    }

    cout << "\nMatriz C:\n";
    for (int i = 0; i < 7; i++) {
        cout << C[i][0] << " " << C[i][1] << endl;
    }

    return 0;
}