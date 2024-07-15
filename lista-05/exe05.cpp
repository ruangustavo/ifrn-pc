#include <iostream>

using namespace std;

int main() {
  const int N = 5;

  int medias[N];

  for (int i = 0; i < N; i++) {
    double media_aluno = 0;

    for (int j = 0; j < 4; j++) {
      double nota;
      cout << "Digite a " << j + 1 << "ª nota do aluno " << i + 1 << ": ";
      cin >> nota;
      media_aluno += nota;
    }

    media_aluno /= 4;
    medias[i] = media_aluno;
  }

  for (int i = 0; i < N; i++) {
    if (medias[i] >= 7) {
      cout << "O aluno " << i + 1 << " foi aprovado com média " << medias[i] << '\n';
    } else {
      cout << "O aluno " << i + 1 << " foi reprovado com média " << medias[i] << '\n';
    }
  }

  return 0;
}