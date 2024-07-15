#include <iostream>

using namespace std;

int main() {
  const int N = 15;

  int vet[N];

  for (int i = 0; i < N; i++) {
    cout << "Digite o " << i + 1 << "º número: ";
    cin >> vet[i];
  }

  // essa questao dá pra fazer com outra estrutura de dados mais apropriada
  // nao quis complicar muito
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      if (vet[i] == vet[j]) {
        cout << "O número " << vet[i] << " se repete nos índices " << i << " e " << j << '\n';
      }
    }
  }

  return 0;
}