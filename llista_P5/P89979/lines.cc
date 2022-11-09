#include <iostream>
#include <string>
using namespace std;

bool es_ordenada(int n) {

    string par1;
    cin >> par1; 
    
    int i = 1;
    bool lexi_ok = true;
    while (i <= (n-1)) {//ja pillo un caracter al principi (d'aqui -1)
        string par2;
        cin >> par2;
        
        //comprovo ordre lexicografic en fila (esquema recorregut)
        while (lexi_ok) {
            if(std::string(par1) > std::string(par2)) {   
                lexi_ok = false; //ha trobat ordre lexicografic dolent
            }
            par1 = par2;
            cin >> par2;
        }
        
        
        //cout << ' ' << par1 << ' ' << par2 << ' ' << lexi_ok << endl;
        i = i + 1;
    }
    return lexi_ok;
}


int main() {
    bool trobada = false;
    int linia = 0;
    int n = 0;
    while (cin >> n and not trobada) {
        if (es_ordenada(n)) trobada = true;
        //cout << trobada;
        ++linia;
    }
    
    if (trobada)  
        cout << "The first line in increasing order is " << linia << '.';
    else          
        cout << "There is no line in increasing order.";
    
    cout << endl;
}
