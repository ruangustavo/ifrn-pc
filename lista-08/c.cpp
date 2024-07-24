#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int matriz[4][5];

    cout << "Digite os 20 elementos da matriz:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}