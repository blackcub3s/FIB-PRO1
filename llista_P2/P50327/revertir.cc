#include <iostream>
using namespace std;

const int base = 10;

int main() {
    int n;
    cin >> n;

    if (n == 0) cout << n; //input 0... cas excepcional que cal definir a part!
    
    while (n != 0) {
        int i = 0;
        while (n%base != 0) {
            i = i + 1;
            n = n - 1;
        }
        n = n/base; //compte amb això! Cal treure els 0 que es generin o que ja hi siguin.
        cout << i;
    }
    cout << endl;
}
