#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z; //en comptes de x1, x2 i x3 per comoditat
    
    int sum = 0;
    while (cin >> x >> y >> z) {
    
        int x_ms = x%10;
        int y_ms = y%10;
        int z_ms = z%10;
        
        if ((x%100 == x_ms) and (y%100 == y_ms) and (z%100 == z_ms)) {
            if ((x_ms < y_ms) and (y_ms < z_ms))
                sum = sum + 1;
        }
    }
    
    cout << "3-Increasing: " << sum << endl;
}
