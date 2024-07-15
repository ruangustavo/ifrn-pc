#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int graus;
    cin >> graus;
    double radianos = graus * 3.14159 / 180;
    cout << "Graus: " << graus << endl;
    cout << "Radianos: " << radianos << endl;
    return 0;
}
