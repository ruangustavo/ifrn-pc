#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;
    cin >> n;

    int numero_meio = n / 2 + 1;

    for (int i = 1; i <= numero_meio; i++) {
        for (int k = 0; k < i - 1; k++) {
            cout << " ";
        }

        for (int j = i; j <= n - i + 1; j++) {
            if (j > i) cout << " ";
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
