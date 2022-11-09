#include <iostream>
using namespace std;

int main() {
    char c1, c2, c3;
    cin >> c1; 
    cin >> c2;
    cin >> c3;

    if (c3 == '/') { 
        if (c1 != '/')        cout << 'r' << 'i' << 'g' << 'h' << 't';
        else {
            if (c2 == '/')    cout << 'r' << 'i' << 'g' << 'h' << 't';
            else              cout << 'w' << 'r' << 'o' << 'n' << 'g';
        }
    }
    else
        cout << 'w' << 'r' << 'o' << 'n' << 'g'; 
    
    cout << endl;
}
    

