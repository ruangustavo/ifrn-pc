#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int limite_superior;
    cin >> limite_superior;

    int soma = 0;
    for (int i = 1; i <= limite_superior; i++) {
        if (i % 2 == 1) soma += i;
    }

    cout << "A soma dos números ímpares entre 1 e " << limite_superior
         << " é: " << soma << endl;
    return 0;
}
