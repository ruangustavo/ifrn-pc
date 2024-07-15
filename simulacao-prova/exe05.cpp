#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int inicio = 0, fim = 0;
    while (fim < v.size()) {
        while (fim + 1 < v.size() && v[fim + 1] == v[fim] + 1) {
            ++fim;
        }

        for (int i = inicio; i <= fim; ++i) {
            cout << v[i] << ' ';
        }
        cout << '\n';

        inicio = fim + 1;
        fim = inicio;
    }

    return 0;
}
