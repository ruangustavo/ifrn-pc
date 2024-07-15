#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int anos, meses, dias;
    cin >> anos >> meses >> dias;
    int idade = anos + meses / 12 + dias / 365;
    cout << idade << endl;
    return 0;
}
