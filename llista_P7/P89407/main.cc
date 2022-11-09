#include <iostream>
#include <vector>
using namespace std;



bool mateixos_digits(int x, int y, int b) {
    vector<int> v(b,0); //contindra conteig per nombres del 0 1 2 al 9
    vector<int> w(b,0);
    
    int prod = x*y;
    //relleno freqquencies en el vector dels factors
    while (x != 0) {
        ++v[x%b];
        x = x/b;
    }
    
    //relleno freqquencies en el vector dels factors
    while (y != 0) {
        ++v[y%b];
        y = y/b;
    }
    
    //relleno frequencies de nombres en el vector del producte
    while (prod != 0) {
        ++w[prod%b];
        prod = prod/b;
    }
    
    //miro si les frequencies en el vector de factors es igual a la del producte
    //note uque aqui cal esquema de cerca
    int i = 0;
    bool vectors_diferents = false;
    while (i < 10 and not vectors_diferents) {
        cout << v[i] << "  (" << w[i] << ')'<< endl;
        if (v[i] != w[i])   vectors_diferents = true;
        ++i;
    }
    if (vectors_diferents)  return false;
    return true;

}


void escriu(int n, int b) {
    //cas directe
    if (n < b)  cout << n;
    
    //cas recursiu
    else {
        escriu(n/b, b);
        cout << n%b;
    }
}


int main() {
    int m, n;
    while (cin >> m >> n) {
        cout << "solucions per a" << ' ' << m  << ' ' <<  'i'  << ' ' <<  n << endl;
        int producte = m * n;
        for (int b = 2; b <= 16; ++b) {
            //NOTA, NOMES FALTA CONVERTIR M I N A LA BASE B, PERQUE ESTAN A BASE 10. LA PUTADA
            //ES QUE LA FUNCIO VOID QUE DEMANEN A L'ENUCNIAT NO HO PERMET FER Xd.
            if (mateixos_digits(m,n,b)) {
                escriu(m,b);
                cout << " * ";
                escriu(n, b); 
                cout << " = "; 
                escriu(n, b);
                cout << " (base " << b << ')';
                cout << endl;
            }
        }
    }
   
}
