#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int m = n;
    int i = 0;
    while (m != 0) {
        m = m/10;
        i = i + 1;
    }
    
    if (i == 0) i = 1; //si no ha entrat al bucle (cas n = 0)
    
    cout << "The number of digits of " << n << " is " << i << "." << endl;
}


