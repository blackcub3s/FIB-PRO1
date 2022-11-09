#include <iostream>
using namespace std;

const int final_taula = 10;

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= final_taula; ++i) {
        cout << n << "*" << i << " = " << i*n << endl;
    }
}
