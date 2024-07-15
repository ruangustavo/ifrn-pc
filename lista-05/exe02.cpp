#include <iostream>

using namespace std;

int main() {
  const int N = 10;

  float arr[N];

  for (int i = 0; i < N; i++) {
    cout << "Digite o " << i + 1 << "º número: ";
    cin >> arr[i];
  }

  for (int i = N - 1; i >= 0; i--) {
    cout << "O " << i + 1 << "º número é: " << arr[i] << endl;
  }

  return 0;
}