#include <iostream>
using namespace std;

bool isPrimo(int n) {
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;
    cin >> n;

    int soma_primos = 0, primos_encontrados = 0, numero_atual = 2;

    while (primos_encontrados < n) {
        if (isPrimo(numero_atual)) {
            soma_primos += numero_atual;
            primos_encontrados++;
        }
        numero_atual++;
    }

    cout << soma_primos << '\n';
    return 0;
}
