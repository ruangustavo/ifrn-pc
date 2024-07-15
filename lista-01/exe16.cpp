#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    double pes;
    cin >> pes;
    double metros = pes / 3.28084;
    cout << "Metros: " << metros << endl;
    return 0;
}
