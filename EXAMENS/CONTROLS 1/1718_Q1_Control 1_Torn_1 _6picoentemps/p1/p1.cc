#include <iostream>
using namespace std;

int main() {
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    
    
    //check LBA
    //NOTE: we use legibility parentheses; they are not necessary)
    if ((x1%2 == 0) and (x3%2 == 0) and (x2%2 != 0) and (x4%2 != 0))
        cout << "LBA" << endl;
    else if ((x1%2 != 0) and (x3%2 != 0) and (x2%2 == 0) and (x4%2 == 0))
        cout << "LBA" << endl;
    
    //check increasing
    if ((x1 < x2) and (x2 < x3) and (x3 < x4))
        cout << "Increasing" << endl;
    else if ((x1 > x2) and (x2 > x3) and (x3 > x4))
        cout << "Decreasing" << endl;
    else {
        //check "folded"
        if ((x1 == x3) and (x2 == x4)) {
            cout << "Folded" << endl;
        }
    }
    
}
