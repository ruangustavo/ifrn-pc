#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int total_mercadorias;
    cin >> total_mercadorias;

    double valor_total = 0;
    for (int i = 0; i < total_mercadorias; i++) {
        double valor;
        cin >> valor;
        valor_total += valor;
    }

    double media_mercadorias = valor_total / total_mercadorias;

    cout << "Total em estoque: " << valor_total << endl;
    cout << "Média das mercadoria: " << media_mercadorias << endl;
    return 0;
}
