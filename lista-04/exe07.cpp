#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a, b;
    cin >> a >> b;

    for (; b == 0;) {
        cout << "Insira um número diferente de zero: ";
        cin >> b;
    }

    cout << "A divisão de " << a << " por " << b << " é: " << a / b << endl;
    return 0;
}
