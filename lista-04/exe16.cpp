#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;
    while (true) {
        cin >> n;
        if (n < 0)
            cout << "Valor inválido!" << endl;
        else
            break;
    }

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    return 0;
}
