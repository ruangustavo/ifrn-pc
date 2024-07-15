#include <iostream>
using namespace std;

bool isPrimo(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int soma = 0;
    for (int i = 1; i < 50; i++) {
        if (isPrimo(i)) soma += i;
    }

    cout << "A soma dos primos entre 1 e 50 é: " << soma << endl;
    return 0;
}
