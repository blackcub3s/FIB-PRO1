#include <iostream>
#include <cmath>
using namespace std;

const int BASE = 16;

char transformador_a_16(int x){
    //cal convertir el 10, 11, 12... a lletres A,B,C...
    int ascii_A = int('A');
        for (int i = 0; i <= 5; ++i){
            if (x == (10+i))    return char(ascii_A + i); //esquema de recorregut amb return, sense usar break... HJÁAA! :)
        }
    return 'X'; //el compilador del jutge es queixa si no poso un return 'caracter' al final xd.
}

int main() {
    int n;
    cin >> n;
    
    while (n >= BASE){
        int nre_a_imp = n%BASE;
        
        if (nre_a_imp < 10)     cout << nre_a_imp;
        else            cout << transformador_a_16(nre_a_imp);
        
        n = n/BASE;
    }
    if (n < 10)         cout << n << endl; //nota que cal imprimir el quocient final!
    else                cout << transformador_a_16(n) << endl;
}
