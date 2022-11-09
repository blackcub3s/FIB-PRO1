#include <iostream>
using namespace std;

int treu_llesca_3_finals(int x) {
    int primer = x%10; //pillo el de la dreta
    x = x/10; //faig 'crop' per la dreta
    int segon = x%10;
    x = x/10;
    int tercer = x%10;
    return primer + segon*10 + tercer*100;
}

int main() {
    int n_ini;
    cin >> n_ini;
    
    cout << "nombres que acaben igual que " << n_ini << ":" << endl;
    
    n_ini = treu_llesca_3_finals(n_ini); //peto el valor inicial perque ja no em cal, reaprofito la variable 
    
    int n;
    int cont = 0;
    while (cin >> n) {
        if (n_ini == treu_llesca_3_finals(n)) {
           cout << n << endl;
           cont = cont + 1;
        }
    }
    cout << "total: " << cont << endl;
}    
