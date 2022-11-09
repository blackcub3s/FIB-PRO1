#include <iostream>
using namespace std;



int main() {
    int k;
    cin >> k;
    
    int i;
    for (int base = 2; base <= 16; ++base) {
        i = 1;
        int aproximat = base;
        while (aproximat <= k) {
            aproximat = aproximat*base;
            i = i + 1;
        }
    cout << "Base " << base << ": " << i << " cifras." << endl;        
    }
    
}
    
