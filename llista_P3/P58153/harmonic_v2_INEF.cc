#include <iostream>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(10);

    int n, m;
    while (cin >> n >> m) {
        
        int i = 1;
        double sum = 0;
        
        while (i <= m) {
            sum = sum - 1.0/i; //clarooo!!! aix es fa eficient i no cal una variable accesoria
            i = i + 1;
        }    
        
        while (i <= n) {
            sum = sum + 1.0/i;
            i = i + 1;
        }    
        cout << sum << endl;
    }
}
