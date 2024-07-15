#include <iostream>

using namespace std;

int main() {
  const int N = 20;

  int arr[N];

  for (int i = 0; i < N; i++) {
    cout << "Digite o " << i + 1 << "º número: ";
    cin >> arr[i];
  }

  int x;
  cin >> x;

  bool x_encontrado = false;

  for (int i = 0; i < N; i++) {
    if (arr[i] == x) {
      x_encontrado = true;
      break;
    }
  }

  if (x_encontrado) {
    int new_x;
    cout << "Digite o novo valor de x: ";
    cin >> new_x;
  }

  return 0;
}