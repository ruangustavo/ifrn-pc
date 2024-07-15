#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;
    cin >> n;

    vector<int> v(n);

    double media_aritmetica = 0;
    double media_ponderada = 0;

    for (int i = 1; i <= n; i++) {
        cin >> v[i];

        media_aritmetica += v[i];
        // NOTA: deveria considerar o indíce como o peso da média ponderada? No
        // enunciado ficou ímplicito
        media_ponderada += v[i] * i;
    }

    media_aritmetica /= n;
    media_ponderada /= n;

    cout << "A media aritmetica e: " << media_aritmetica << '\n';
    cout << "A media ponderada e: " << media_ponderada << '\n';
    return 0;
}
