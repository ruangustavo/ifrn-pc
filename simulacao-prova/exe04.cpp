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

    int x;
    cin >> x;

    v.erase(v.begin() + x - 1);

    cout << "O vetor depois de deletar o elemento " << x << " e: " << '\n';
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
    return 0;
}
