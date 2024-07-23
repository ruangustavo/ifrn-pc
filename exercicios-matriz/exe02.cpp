#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    const int NUM_PESSOAS = 2;
    const int NUM_DADOS = 5;

    string agenda[NUM_PESSOAS][NUM_DADOS];

    for (int i = 0; i < NUM_PESSOAS; i++) {
        cout << "Entre com os dados da pessoa " << i + 1 << ":" << endl;
        cout << "Nome: ";
        getline(cin, agenda[i][0]);
        cout << "Endereço: ";
        getline(cin, agenda[i][1]);
        cout << "Código Postal: ";
        getline(cin, agenda[i][2]);
        cout << "Bairro: ";
        getline(cin, agenda[i][3]);
        cout << "Telefone: ";
        getline(cin, agenda[i][4]);
        cout << endl;
    }

    cout << "Agenda:" << endl;
    for (int i = 0; i < NUM_PESSOAS; i++) {
        cout << "Pessoa " << i + 1 << ":" << endl;
        cout << "Nome: " << agenda[i][0] << endl;
        cout << "Endereço: " << agenda[i][1] << endl;
        cout << "Código Postal: " << agenda[i][2] << endl;
        cout << "Bairro: " << agenda[i][3] << endl;
        cout << "Telefone: " << agenda[i][4] << endl;
        cout << endl;
    }

    return 0;
}