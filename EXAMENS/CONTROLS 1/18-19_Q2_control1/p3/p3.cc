#include <iostream>
using namespace std;

int main() {
    int n;
    
    while (cin >> n) {
        cout << "aterrant a: " << n << endl;

        
        int i = 1;
        int m;
        while ((i < n) and (cin >> m)) {
            
            if (m % 2 == 0)
                cout << "sobrevolant parell: " << m << endl;
            i = i + 1;
        }
        
    
    }
}
