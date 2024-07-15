#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int soma = 0;
    for (int i = 2; i < 1000; i += 2) soma += i;
    cout << "A soma dos números pares entre 2 e 1000 é: " << soma << endl;
    return 0;
}
