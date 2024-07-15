#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int soma = 0;
    for (int i = 1; i <= 100; i += 2) soma += i;
    cout << "A soma dos números ímpares entre 1 e 100 é: " << soma << endl;

    return 0;
}
