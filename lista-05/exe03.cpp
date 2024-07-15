#include <iostream>

using namespace std;

int main() {
  const int N = 4;

  int notas[N];

  for (int i = 0; i < N; i++) {
    cout << "Digite a " << i + 1 << "ª nota: ";
    cin >> notas[i];
  }

  double media = 0;

  for (int i = 0; i < N; i++) {
    media += notas[i];
  }

  media /= N;

  for (int i = 0; i < N; i++) {
    cout << "A " << i + 1 << "ª nota é: " << notas[i] << '\n';
  }

  cout << "A média das notas é: " << media << '\n';

  return 0;
}