#include <iostream>
using namespace std;

void a_base_x(int n, int base) {
    //cas directe
    if (n < base)   cout << n;
    
    //induccio hipotesis
    else {
        a_base_x(n/base, base);
        cout << n%base;
    }
}


char n_hex(int x) {
    for (int i = 0; i <= 9; ++i) {  
        if (x == i) return char(int('0')+i);
    }
    for (int i = 0; i <= 6; ++i) {  
        if (x == 10 + i) return char(int('A')+i);
    }    
    return 'L'; //pq no es queixi el jutge
}

void a_base_16(int n, int base) {
    
    //cas directe
    if (n < base)   cout << n_hex(n);
    
    //induccio hipotesis
    else {
        a_base_16(n/base, base);
        cout << n_hex(n%base);
    }
}




int main() {
    
    int n;
    while (cin >> n) {
        
        cout << n << " = ";
        
        a_base_x(n,2);
        cout << ", "; 
        a_base_x(n,8);
        cout << ", "; 
        a_base_16(n,16);
        cout << endl;
    }
}
