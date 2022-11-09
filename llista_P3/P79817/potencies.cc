#include <iostream>
using namespace std;

int main() {
    int a,b;
    
    while (cin >> a >> b) {
        //cout << a << "__" << b;
        
        if (b == 0)     cout << 1;
        else {
            int pot = a;
            for (int i = 1; i < b; ++i) {
                pot = pot*a;
            }
            cout << pot;
        }
    cout << endl;
    }
}
