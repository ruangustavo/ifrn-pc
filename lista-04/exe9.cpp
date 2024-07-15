#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a, b, c;
    cin >> a >> b >> c;

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            cout << "Triângulo Equilátero" << '\n';
        } else {
            if (a == b || b == c || c == a) {
                cout << "Triângulo Isósceles" << '\n';
            } else {
                cout << "Triângulo Escaleno" << '\n';
            }
        }
    } else {
        cout << "Não e possível formar um triângulo" << '\n';
    }

    return 0;
}
