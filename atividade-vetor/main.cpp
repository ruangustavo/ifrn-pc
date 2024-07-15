#include <iostream>
#include <vector>
using namespace std;

struct produto {
    string nome;
    double preco;
};

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    vector<produto> produtos;

    for (int i = 0; i < 10; i++) {
        produto p;
        cin >> p.nome >> p.preco;
        produtos.push_back(p);
    }

    double valor;
    cin >> valor;

    for (int i = 0; i < produtos.size(); i++) {
        if (produtos[i].preco <= valor) {
            cout << produtos[i].nome << endl;
        }
    }

    return 0;
}
