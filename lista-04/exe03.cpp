#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int vetor[10];

    for (int i = 0; i < 10; i++) {
        cout << "Digite um número: ";
        cin >> vetor[i];
    }

    double media = 0;
    for (int i = 0; i < 10; i++) {
        media += vetor[i];
    }
    media /= 10;

    cout << "A média é: " << media << endl;
    return 0;
}
