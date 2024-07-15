#include <iostream>

using namespace std;

int main() {
  const int N = 5;

  int idades[N];
  int alturas[N];

  for (int i = 0; i < N; i++) {
    cout << "Digite a idade da " << i + 1 << "ª pessoa: ";
    cin >> idades[i];
    cout << "Digite a altura da " << i + 1 << "ª pessoa: ";
    cin >> alturas[i];
  }

  for (int i = N - 1; i >= 0; i--) {
    cout << "A " << i + 1 << "ª pessoa tem " << idades[i] << " anos e " << alturas[i] << "m de altura." << endl;
  }

  return 0;
}