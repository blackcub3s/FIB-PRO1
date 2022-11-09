#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    
    int j = 0;
    while (j < n) {
        //bucle mes
        for (int i = 1; i < n - j; ++i) {
            cout << '+';
        }
        //impr barra
        cout << '/'; 
        
        //bucle estrelles
        for (int i = 0; i < j; ++i) {
            cout << '*';
        }

        cout << endl;
        
        j = j + 1;
    }
    
    
}
