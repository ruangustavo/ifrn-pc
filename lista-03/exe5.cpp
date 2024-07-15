#include <iostream>
using namespace std;

// Escreva um algoritmo que leia as idades de 2 homens e de 2 mulheres
// (considere que as idades dos homens serão sempre diferentes entre si, bem
// como as das mulheres). Calcule e escreva a soma das idades do homem mais
// velho com a mulher mais nova, e o produto das idades do homem mais novo com a
// mulher mais velha.

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int idade_homem_a, idade_homem_b, idade_mulher_a, idade_mulher_b;
    cin >> idade_homem_a >> idade_homem_b >> idade_mulher_a >> idade_mulher_b;

    cout << "Soma: "
         << max(idade_homem_a, idade_homem_b) +
                min(idade_mulher_a, idade_mulher_b)
         << '\n';

    cout << "Produto: "
         << min(idade_homem_a, idade_homem_b) *
                max(idade_mulher_a, idade_mulher_b)
         << '\n';

    return 0;
}
