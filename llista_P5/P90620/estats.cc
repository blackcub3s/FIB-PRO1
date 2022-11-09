#include <iostream>
using namespace std;

const int P_EST = 3143;

int main() {
    int a, b, c;
    cin >> a >> b;
    c = -1;
    
    bool pic_trobat = false;
    while (c != 0 and not pic_trobat) {
        cin >> c;
        if (c != 0) pic_trobat = (a < b and b > c) and (b > P_EST);
        a = b;
        b = c;
    }
    if (pic_trobat)     cout << "YES" << endl;
    else                cout << "NO" << endl;
}
