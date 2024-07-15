#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    double nota1, nota2, nota3;
    cin >> nota1 >> nota2 >> nota3;
    double media = (nota1 * 2 + nota2 * 3 + nota3 * 4) / 9;
    cout << media << endl;
    return 0;
}
