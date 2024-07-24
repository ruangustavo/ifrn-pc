#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double A[12], B[12], C[12][2];

    cout << "Digite os elementos da matriz A:\n";
    for (int i = 0; i < 12; i++) {
        cin >> A[i];
    }

    cout << "Digite os elementos da matriz B:\n";
    for (int i = 0; i < 12; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < 12; i++) {
        C[i][0] = A[i] * 2;
        C[i][1] = B[i] - 5;
    }

    cout << "Matriz A:\n";
    for (int i = 0; i < 12; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Matriz B:\n";
    for (int i = 0; i < 12; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    cout << "Matriz C:\n";
    for (int i = 0; i < 12; i++) {
        cout << C[i][0] << " " << C[i][1] << endl;
    }

    return 0;
}