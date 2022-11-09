#include <iostream>
using namespace std;

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    if (a1 == a2 and b1 == b2)          cout << '='; //intervals iguals
    else if (a1 >= a2 and b1 <= b2)     cout << 1; //primer dins el segon*
    else if (a2 >= a1 and b2 <= b1)     cout << 2;
    else                                cout << '?';
    
    cout << endl;
}

//(noteu que podria haver fet també  (a1 >= a2 and b1 < b2) or (a1 > a2 and b1 <= b2)
// pero com que es un else if, l'if anterior ja fa no requerir l'or.
