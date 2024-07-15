#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) * 5.0 / 9.0;
    cout << celsius << endl;
    return 0;
}
