#include <iostream>
using namespace std;

int main() {
    int any;
    cin >> any; //n compres entre 1800 i 9999 (ambdos inclosos crec).
    
    if (any%100 != 0){//no acaba en dos zeros
        if (any%4 == 0)     cout << "YES";  
        else                cout << "NO";
    }
    else {
        any = any / 100; //elimino els dos zeros
        if (any%4 == 0)     cout << "YES";
        else                cout << "NO"; ///no multiple de quatre
    }
    
    cout << endl;
}
