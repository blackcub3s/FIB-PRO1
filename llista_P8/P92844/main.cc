#include <iostream>
#include <vector>
using namespace std;


typedef vector<char> Fila;
typedef vector<Fila> Rectangle;


void dimensions_minimes(char c, const Rectangle& r, int& fils, int& cols) {
    
}


int main() {
  int n, m;
  while (cin >> n >> m) {
    Rectangle r(n, vector<char>(m));
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j) cin >> r[i][j];

    int t;
    cin >> t;
    while (t--) {
      char c;
      cin >> c;
      int fils, cols;
      dimensions_minimes(c, r, fils, cols);
      cout << fils << " " << cols << endl;
    }
  }
}
