#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int distancia, tempo;
    cin >> distancia >> tempo;
    double velocidade = (distancia * 1000) / (tempo * 60);
    cout << "Velocidade: " << velocidade << endl;
    return 0;
}
