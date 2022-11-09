#include <iostream>
using namespace std;

int main() {
    int b, n;
    
    while (cin >> b >> n) {
        int nre_digits = 1;//cal incloure ultima iteracio
        while (n >= b) {
            n = n / b; //em quedo el quocient
            nre_digits = nre_digits + 1;
        }
    cout << nre_digits << endl;
    }
} 
