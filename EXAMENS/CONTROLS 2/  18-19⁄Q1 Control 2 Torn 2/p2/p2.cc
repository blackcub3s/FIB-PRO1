#include <iostream>
using namespace std;




//PRE: contador a 0 (pas per referencia), que conta les linies que anem recorrent.
//POST: retorna true si ha trobat triplet, false en cas contrari. contador (es parametre entrada/sortida) conté les linies recorregudes FINS que troba el triplet (o conté totes les linies si no n'ha trobat cap).

bool triplet_trobat(int& contador) {
    

    int a, b, c;
    //recorro les linies
    while (cin >> a >> b >> c) {
      
        ++contador;
        
        //recorro dins de cada linia.
        int sumo_tres_triplets = 0;
        while (c != 0) {
                
            //Els dos possibles tipus de triplets avaluats
            if (a%2 == 0 and b%2 != 0 and c%2 == 0)         ++sumo_tres_triplets;
            else if (a%2 != 0 and b%2 == 0 and c%2 != 0)    ++sumo_tres_triplets;
                
            //seguim recorrent la linia
            a = b;
            b = c;
            cin >> c;
            
            //si troba els triplets d'una linia ja TORNA true i atura la funcio
            if (sumo_tres_triplets == 3)     return true;
        }        
    }
    return false;
}

int main() {
    int contador = 0;
    if (triplet_trobat(contador))   cout << contador << endl;
    else                            cout << "none" << endl;
}
