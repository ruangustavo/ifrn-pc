#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    return 0;
}
