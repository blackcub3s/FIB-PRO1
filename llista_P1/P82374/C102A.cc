#include <iostream>
using namespace std;

int main() {
    int x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;
    
    //noteu que els and es fan abans que els or. no calen parentesis, pero els posem per legibilitat.
    if ((x <= b and x >= a) or (x <= d and x >= c))     cout << "yes"; 
    else                                                cout << "no";
    
    cout << endl;
}
