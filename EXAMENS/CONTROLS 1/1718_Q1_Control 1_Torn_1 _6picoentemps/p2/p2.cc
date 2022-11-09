#include <iostream>
using namespace std;

int main() {
    int x1, x2, x3, x4;
    int sum_incr = 0;
    int sum_folded = 0;
    
    while (cin >> x1 >> x2 >> x3 >> x4) {
        //check and add increasing
        if ((x1 < x2) and (x2 < x3) and (x3 < x4))
            sum_incr = sum_incr + 1;

        //ckeck and add "folded"
        if ((x1 == x3) and (x2 == x4)) 
            sum_folded = sum_folded + 1;
    }
    
    cout << "Increasing: " << sum_incr << endl;
    cout << "Folded: " << sum_folded << endl;    
}
