#include <iostream>
using namespace std;

// Escreva um algoritmo para ler o número total de eleitores de um município, o
// número de votos brancos, nulos e válidos. Calcular e escrever o percentual
// que cada um representa em relação ao total de eleitores.

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int total_eleitores;
    cin >> total_eleitores;

    int brancos, nulos, validos;
    cin >> brancos >> nulos >> validos;

    float brancos_percentual = brancos / total_eleitores * 100;
    float nulos_percentual = nulos / total_eleitores * 100;
    float validos_percentual = validos / total_eleitores * 100;

    cout << "Brancos: " << brancos_percentual << '%' << '\n';
    cout << "Nulos: " << nulos_percentual << '%' << '\n';
    cout << "Válidos: " << validos_percentual << '%' << '\n';
    return 0;
}
