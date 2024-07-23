#include <iostream>
#include <vector>
using namespace std;

// NOTA: foi utilizado array pra evitar o erro "expression must have a constant
// value" no c++, o tamanho do array deve ser conhecido em tempo de compilação

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int m, p, n;

    cout << "M: ";
    cin >> m;
    cout << "P: ";
    cin >> p;

    vector<vector<int>> a(m, vector<int>(p));

    cout << "N: ";
    cin >> n;

    vector<vector<int>> b(p, vector<int>(n));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < n; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }

    vector<vector<int>> c(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < p; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "C[" << i << "][" << j << "]: " << c[i][j] << endl;
        }
    }

    return 0;
}
