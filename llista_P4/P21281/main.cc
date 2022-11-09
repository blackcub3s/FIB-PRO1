#include <iostream>
using namespace std;


void factor(int n, int& f, int& q) {
    int i = 1;
    int max_q = 0;
    int max_f = 0;
    q = 1;
    f = 1;
    while (i < n) {
        if (max_q < q) {
            max_q = q;
            max_f = f;
            cout << "div : " << i << " f: "<< f << " q: " << q << endl;
        }
        int m = n;
        while (m%i == 0) {
            m = m/i;
            q = q + 1;
            f = i;
        }
        i = i + 1;
    }
    f = max_f;
    q = max_q;
}



int main() {
  int n;
  while (cin >> n) {
    int f = -1, q = 1000;
    factor(n, f, q);
    cout << f << ' ' << q << endl;
  }
}
