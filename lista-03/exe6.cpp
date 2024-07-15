#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double quantidade_morango, quantidade_macas;
    cin >> quantidade_morango >> quantidade_macas;

    double valor_morango =
        (quantidade_morango > 5 ? 2.2 : 2.5) * quantidade_morango;

    double valor_macas = (quantidade_macas > 5 ? 1.8 : 1.5) * quantidade_macas;

    double valor_total = valor_macas + valor_morango;

    if (quantidade_macas + quantidade_morango > 8 || valor_total > 25) {
        valor_total *= 0.9;
    }

    cout << "Valor total: " << valor_total << '\n';
    return 0;
}
