#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a, b;
    cin >> a >> b;

    int soma = 0;
    for (int i = a; i <= b; i++) {
        soma += i;
    }

    cout << "A soma dos números entre " << a << " e " << b << " é: " << soma;
    return 0;
}
