#include <iostream>
using namespace std;

int main() {
    int b;
    cin >> b;//llegeixo la base en la que ho vull expressar
    
    int nre_dec;
    while (cin >> nre_dec) {
        //convertir a b
        int suma = 0;
        int nre_dec_copia = nre_dec; //cal imprimir-lo intacte al final
        while (nre_dec >= b) {
            suma = suma + nre_dec%b; //vaig acumulant els residus per a sumar-los.
            nre_dec = nre_dec/b; //vaig trobant els quocients successius.´
        }
        
        suma = suma + nre_dec; //el quocient final s'ha de sumar tamb
        cout << nre_dec_copia << ": " << suma << endl; 
    }
}
