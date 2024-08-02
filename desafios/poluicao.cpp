#include <iostream>
#include <vector>
using namespace std;

int main() {
  setlocale(LC_ALL, "pt_BR.UTF-8");

  int m, n;
  cout << "Digite o número de linhas e colunas da matriz: ";
  cin >> m >> n;

  // NOTA: não pode ser array bidimensional porque o número de colunas não é constante
  // e o compilador do C++ precisa saber as dimensões da matriz em tempo de compilação
  vector<vector<int>> matriz(m, vector<int>(n));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << "Digite o valor de poluição para a célula (" << i << ", " << j << "): ";
      cin >> matriz[i][j];
    }
  }

  int x1, y1, x2, y2;
  cout << "Digite as coordenadas da subárea (x1, y1, x2, y2): ";
  cin >> x1 >> y1 >> x2 >> y2;

  int total_poluicao = 0;
  for (int i = x1; i <= x2; i++) {
    for (int j = y1; j <= y2; j++) {
      total_poluicao += matriz[i][j];
    }
  }

  cout << "O total de poluição na subárea especificada é: " << total_poluicao << endl;

  return 0;
}