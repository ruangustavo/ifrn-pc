#include <iostream>

using namespace std;

int main() {
  const int N = 10;

  int arr[N];

  for (int i = 0; i < N; i++) {
    cout << "Digite o " << i + 1 << "º número: ";
    cin >> arr[i];
  }

  int x;
  cout << "Digite um número para verificar se ele está no array: ";
  cin >> x;

  bool encontrado = false;

  for (int i = 0; i < N; i++) {
    if (arr[i] == x) {
      encontrado = true;
      break;
    }
  }

  if (encontrado) {
    cout << "O número " << x << " está no array\n";
  } else {
    cout << "O número " << x << " não está no array\n";
  }

  return 0;
}