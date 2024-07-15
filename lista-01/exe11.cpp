#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double percentual_distribuidor = 0.28;
    double percentual_impostos = 0.45;
    double custo_fabrica;

    cin >> custo_fabrica;
    double custo_consumidor = custo_fabrica +
                              (custo_fabrica * percentual_distribuidor) +
                              (custo_fabrica * percentual_impostos);

    cout << "o custo final ao consumidor é: " << custo_consumidor << endl;
    return 0;
}
