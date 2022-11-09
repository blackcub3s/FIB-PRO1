#include <iostream>
using namespace std;

const int final_taula = 10;

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        cout << n << " x " << i << " = " << i*n << endl;
    }
}
