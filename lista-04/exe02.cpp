#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int soma = 0;
    for (int i = 1; i <= 900; i++) {
        soma += i;
    }

    cout << "A soma de 1 a 900 é " << soma << endl;
    return 0;
}
