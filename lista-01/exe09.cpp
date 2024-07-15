#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int total_eleitores, brancos, nulos, validos;
    cin >> total_eleitores >> brancos >> nulos >> validos;

    double percentual_brancos = brancos * 100.0 / total_eleitores;
    double percentual_nulos = nulos * 100.0 / total_eleitores;
    double percentual_validos = validos * 100.0 / total_eleitores;

    cout << "Percentual brancos: " << percentual_brancos << endl;
    cout << "Percentual nulos: " << percentual_nulos << endl;
    cout << "Percentual validos: " << percentual_validos << endl;

    return 0;
}
