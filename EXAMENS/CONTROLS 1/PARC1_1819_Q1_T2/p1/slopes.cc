#include <iostream>
using namespace std;

int main() {
    char c2;
    cin >> c2; //el c1 el saltem, simplement
    
    cin >> c2;
    
    char c3;
    cin >> c3;

    if ((c2 == '-' and c3 == '/') or (c2 == '/' and c3 == '/'))    
        cout << 'r' << 'i' << 'g' << 'h' << 't';
    else
        cout << 'w' << 'r' << 'o' << 'n' << 'g';
    
    cout << endl;
}
