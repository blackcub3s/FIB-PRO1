#include <iostream>
#include <string>
using namespace std;


//pre: i conte 1, n conte el nombre de paraules de la llista o seq
//post: i valdra un valor mes que n, que sera quan parara d'aplicar recursio.
void revertir_llista(int i, int n) {
    if (i <= n) {
        string par;
        cin >> par;
    
        i = i + 1;
    
        //recursio per a invertir la llista de paraules
        revertir_llista(i,n); 
        
        //revertim cada paraula recorrent l'string al reves.
        int longi_par = par.length();
        for (int j = 0; j < longi_par; ++j)  cout << par[longi_par - j - 1];
        
        cout << endl;
    }
}


int main() {
    int n;
    cin >> n;
    
    int i = 1;
    
    revertir_llista(i,n);
}
