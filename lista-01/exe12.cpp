#include <iostream>
using namespace std;

int main() {
    int numero_carros_vendidos;
    double valor_total_vendas, salario_fixo, comissao_por_carro;

    cin >> numero_carros_vendidos >> valor_total_vendas >> salario_fixo >>
        comissao_por_carro;

    double comissao_venda_carros = numero_carros_vendidos * comissao_por_carro;
    double comissao_vendas = 0.05 * valor_total_vendas;
    double salario_final =
        salario_fixo + comissao_venda_carros + comissao_vendas;

    cout << "O salário final do vendedor é: " << salario_final << endl;
    return 0;
}
