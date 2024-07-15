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

    int menor = v[0], maior = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] < menor) menor = v[i];
        if (v[i] > maior) maior = v[i];
    }

    cout << "O menor e: " << menor << '\n';
    cout << "O maior e: " << maior << '\n';
    return 0;
}
