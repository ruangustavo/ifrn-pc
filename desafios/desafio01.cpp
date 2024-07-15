#include <iostream>
using namespace std;

bool isPrimo(int n) {
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a, b;
    cin >> a >> b;

    for (int i = a; i < b; i++) {
        if (isPrimo(i)) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
