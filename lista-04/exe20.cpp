#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int soma = 0;
    for (int i = 15; i <= 100; i++) {
        soma += i;
    }

    double media = soma / 86;
    cout << "A média aritmética de 15 a 100 é: " << media << endl;
    return 0;
}
