#include <iostream>
#include <cmath>
using namespace std;

const int BASE = 2;


int main() {
    int n;
    cin >> n;
    
    while (n >= BASE){
        int nre_a_imp = n%BASE;
        cout << nre_a_imp;
        n = n/BASE;
    }
    cout << n << endl; //nota que cal imprimir el quocient final!
}
