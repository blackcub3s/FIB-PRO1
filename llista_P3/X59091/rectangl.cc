#include <iostream>
using namespace std;

int main() {
    int n, m;
    bool imprimeix_salt_paragraf = false; //solucio al problema de la linia 31 ***
    while (cin >> n >> m) {
        int k = 9;
        int i = 0;
        
        if (imprimeix_salt_paragraf)        cout << endl; //sol problema linia 31

        imprimeix_salt_paragraf = true;
        while (i < n) {
            int j = 0;
            while (j < m) {
                if (k >= 0) {
                    cout << k;
                }
                else {
                    k = 9;
                    cout << k;

                }
                k = k - 1;
                j = j + 1;
            }
            cout << endl;
            i = i + 1;
        }
        //aqui posava abans el cline pero s'imprimia vestigialment al final ***
    }
}
