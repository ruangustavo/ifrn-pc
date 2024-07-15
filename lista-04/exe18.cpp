#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int soma = 0;

    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;

        if (soma < 40) soma += n;
    }

    cout << "A soma dos números é: " << soma << endl;
    return 0;
}
