#include <iostream>
using namespace std;

// O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
// porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
// Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%,
// escrever um algoritmo para ler o custo de fábrica de um carro, calcular e
// escrever o custo final ao consumidor.

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float custo_fabrica;
    cin >> custo_fabrica;

    float percentual_distribuidor = 0.28;
    float percentual_impostos = 0.45;

    float custo_final =
        custo_fabrica * (1 + percentual_distribuidor + percentual_impostos);
    cout << "Custo final: " << custo_final << '\n';

    return 0;
}
