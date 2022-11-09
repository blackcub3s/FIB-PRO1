#include <iostream>
using namespace std;

int main() {
    int pos;
    cin >> pos;
    
    bool incorrecte = false;
    
    if (pos <= 0) //cas particular de input 0. Cal definir a part.
        incorrecte = true;
    
    int n = 0;
    int i = 1;
    while (i <= pos and (not incorrecte)) {
        if (cin >> n) {
            i = i + 1;
        }
        else { 
            incorrecte = true;
        }
    }
    if (incorrecte) 
        cout << "Incorrect position.";
    else
        cout << "At the position " << pos << " there is a(n) " << n << '.'; 
    
    cout << endl;
}
