#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int dentro = 0, fora = 0;

    for (int i = 1; i <= 10; i++) {
        int n;
        cin >> n;

        if (n >= 10 && n <= 20)
            dentro++;
        else
            fora++;
    }

    cout << "Dentro do intervalo: " << dentro << endl;
    cout << "Fora do intervalo: " << fora << endl;

    return 0;
}
