#include <iostream>
using namespace std;

// Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma
// empresa. Sabendo-se que ele recebe uma comissão de 3% sobre o total das
// vendas até R$ 1.500,00 mais 5% sobre o que ultrapassar este valor, calcular e
// escrever o seu salário total.

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double salario_fixo;
    cin >> salario_fixo;

    double valor_vendas;
    cin >> valor_vendas;

    double comissao = valor_vendas <= 1500.00
                          ? valor_vendas * 0.03
                          : 1500.00 * 0.03 + (valor_vendas - 1500.00) * 0.05;

    double salario_final = salario_fixo + comissao;
    cout << "Salário total: " << salario_final << '\n';
    return 0;
}
