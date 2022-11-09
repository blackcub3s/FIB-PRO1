#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        //inciialitzo i empleno el vector
        vector<int> v(n);
        for (int i = 0; i < n; ++i)     cin >> v[i];
        
        
        // ara creo un loop per cada linia. A cada linia faig dos fors,
        // un on sumo els nombres a l'esquerra del nombre a la posicio i
        // i els nombres a la dreta del nombre a la posicio i.
        bool trobat = false;
        int i = 0;
        while (i < n and not trobat) {
            int sum = 0;
            
            //sumem nombres per l'esquerra
            for (int j = 0; j < i; ++j)         sum = sum + v[j];
        
            //sumem nombres per la dreta
            for (int j = i + 1; j < n; ++j)     sum = sum + v[j];

            //pregunto si l'he trobat i, si es així, surto del for (cerca).
            if (sum == v[i]) {
                trobat = true;
                cout << "YES" << endl;
            }
            ++i;
        }
        if (not trobat)     cout << "NO" << endl;
    }
    
}
