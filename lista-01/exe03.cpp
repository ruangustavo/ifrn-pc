#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double celsius;
    cin >> celsius;
    double fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout << fahrenheit << endl;
    return 0;
}
