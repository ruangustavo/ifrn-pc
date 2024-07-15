#include <iostream>
using namespace std;

// Faça um algoritmo para ler as 3 notas obtidas por um aluno nas 3 verificações
// e a média dos exercícios que fazem parte da avaliação. Calcular a média de
// aproveitamento, usando a fórmula abaixo e escrever o conceito do aluno de
// acordo com a tabela de conceitos mais abaixo:
// (n1 + n2 * 2 + n3 * 3 + media_dos_exercicios) / 7

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double nota1, nota2, nota3;
    cin >> nota1 >> nota2 >> nota3;

    double media_dos_exercicios = (nota1 + nota2 + nota3) / 3;
    double media_aproveitamento =
        (nota1 + nota2 * 2 + nota3 * 3 + media_dos_exercicios) / 7;

    string conceito;
    if (media_aproveitamento <= 10)
        conceito = "A";
    else if (media_aproveitamento < 9)
        conceito = "B";
    else if (media_aproveitamento < 7.5)
        conceito = "C";
    else if (media_aproveitamento < 6)
        conceito = "D";

    cout << "Conceito: " << conceito << '\n';
    return 0;
}
