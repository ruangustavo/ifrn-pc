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

  int total_vezes_que_aparece = 0;

  for (int i = 0; i < N; i++) {
    if (arr[i] == x) {
      total_vezes_que_aparece++;
    }
  }

  cout << "O número " << x << " aparece " << total_vezes_que_aparece << " vezes no array\n";

  return 0;
}