#include <iostream>
using namespace std;

// pre: la i val zero, perquè serà un contador de les paraules impreses.
// post: la i valdrà el valor d'entrada incrementat una unitat
// per a la seguent crida recursiva de la funcio "reverteix".

// la i es parametre d'entrada/sortida, i conta el nombre 
// de paraules que hi ha abans de la n, just
// després de que acabi la lectura recursiva aniuada dins "if (cin >> par)". El 
// paràmetre de la i cal passar-lo per referència, perquè sino els canvis no es
// reflecteixen a les crides recurssives successives -és a dir, anant cap a les
// sentencies no executades de les crides anteriors-.
// M'agrada entendre la recurssió com una nina russa, 
// on la variable i es quedaria estancada dins 
// de la nina russa més petita, no podent ser vista per les nines
// russes més grans, si no fos perquè en tot moment esta guardada en el main.

// EXPLICACIÓ: La funcio reverteix imprimeix en ordre invers les últimes
// n paraules de la seqüència.

void reverteix(int n, int& i) {
    string par;
    if (cin >> par) {
        reverteix(n,i);
        if (i < n) {
            cout << par << endl;
            ++i; //conto quantes n'he imprimit
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    int i = 0;
    reverteix(n,i);
}
