#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double salario, reajuste_percentual;
    cin >> salario >> reajuste_percentual;

    cout << "Salário: " << salario << endl;
    cout << "Reajuste: " << salario * reajuste_percentual / 100.0 << endl;
    return 0;
}
