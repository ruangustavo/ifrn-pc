#include <cmath>
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;

    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << d << endl;
    return 0;
}
