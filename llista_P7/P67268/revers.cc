#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        
        //sequencia buida
        if (n == 0)         cout << endl;
        
        //un sol element
        else if (n == 1) {
            cin >> n;
            cout << n << endl;
        }
        //multiples elements
        else {
            vector<int> v(n);
            //afegeixo la sequencia dins el vector.
            for (int i = 0; i < n; ++i) cin >> v[i];
            //imprimeixo en vector invers (menys primer element que va al final i no t espai)
            for (int i = 0; i < n - 1; ++i) cout << v[n - 1 - i] << ' ';
            //primer element (revertit, ultim)
            cout << v[0] << endl;
        }
    }
    
}
