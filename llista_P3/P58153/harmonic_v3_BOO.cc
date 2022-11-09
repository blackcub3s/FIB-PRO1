#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);

    int n, m;
    while (cin >> n >> m) {
        
        double sum = 0;
        while (m < n) {
            m = m + 1;
            sum = sum + 1.0/m; //clarooo!!! aix es fa eficient i no cal una variable accesoria
        }    
        cout << sum << endl;
    }
}
