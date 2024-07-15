#include <iostream>

using namespace std;

int main() {
  const int N = 10;
  const int M = 20;

  int arrA[N];
  int arrB[N];
  int vetores_intercalados[M];

  for (int i = 0; i < N; i++) {
    cout << "Digite o " << i + 1 << "º número do array A: ";
    cin >> arrA[i];
  }

  for (int i = 0; i < N; i++) {
    cout << "Digite o " << i + 1 << "º número do array B: ";
    cin >> arrB[i];
  }

  for (int i = 0; i < M; i++) {
    if (i % 2 == 0) {
      vetores_intercalados[i] = arrA[i / 2];
    } else {
      vetores_intercalados[i] = arrB[i / 2];
    }
  }

  for (int i = 0; i < M; i++) {
    cout << "O " << i + 1 << "º número do array intercalado é: " << vetores_intercalados[i] << '\n';
  }

  return 0;
}