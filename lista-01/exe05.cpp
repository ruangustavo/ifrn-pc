#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int raio;
    cin >> raio;
    double volume_esfera = 4.0 / 3.0 * 3.14159 * raio * raio * raio;
    cout << volume_esfera << endl;
    return 0;
}
