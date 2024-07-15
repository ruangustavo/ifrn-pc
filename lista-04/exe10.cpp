#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a = 0;
    while (true) {
        cin >> a;

        if (a < 0 || a > 10)
            cout << "Valor inválido!" << endl;
        else
            break;
    }

    int b = 0;
    while (true) {
        cin >> b;

        if (b < 0 || b > 10)
            cout << "Valor inválido!" << endl;
        else
            break;
    }

    double media = (a + b) / 2;
    cout << "A média é: " << media << endl;
    return 0;
}
