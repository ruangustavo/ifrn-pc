#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int soma_pares = 0, soma_impares = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0)
            soma_pares += v[i];
        else
            soma_impares += v[i];
    }

    cout << "A soma dos pares e: " << soma_pares << '\n';
    cout << "A soma dos impares e: " << soma_impares << '\n';
    return 0;
}
