#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int comprimento, largura, altura;
    cin >> comprimento >> largura >> altura;
    double volume = comprimento * largura * altura;
    cout << volume << endl;
    return 0;
}
