#include <iostream>
using namespace std;


int main() {
    char par;
    int balancejat = 0; //si es 0 esta balancejat. 
    bool possible = true;
    while (cin >> par and possible) {
        if (par == '(') balancejat = balancejat + 1;
        else            balancejat = balancejat - 1;
        
        //quan balancejat es negatiu es que ja he trobat
        //mes parentesis de tancament que d'obertura, cas
        //que fa que la sequencia de parentesis sigui,
        //evidentment, incorrecta.
        
        if (balancejat < 0)    possible = false;
    }
    
    if (possible and balancejat == 0)   cout << "yes" << endl;
    else                                cout << "no" << endl;
}
