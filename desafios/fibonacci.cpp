#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int maiorSequenciaFibonacci(vector<int>& a) {
    int n = a.size();
    unordered_set<int> s(a.begin(), a.end());
    int maxComp = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int x = a[i], y = a[j];
            int comp = 2;

            while (s.find(x + y) != s.end()) {
                int z = x + y;
                x = y;
                y = z;
                ++comp;
            }

            if (comp > 2) maxComp = max(maxComp, comp);
        }
    }

    return maxComp >= 3 ? maxComp : 0;
}

int main() {
    int n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << maiorSequenciaFibonacci(a) << '\n';
    return 0;
}
