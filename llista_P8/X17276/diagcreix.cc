#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > matriu;



//FUNCIO: comprovo diagonal principal (EDDB-- d'Esquerra a Dreta i de Dalt a Baix)
//PRE: idem a funcio DEBD_decreixent (consulteu-la)
//post: torna true si troba que la diagonal principal en sentit EDDB creix,
//      fals encas contrari (esquema de cerca).
bool EDDB_es_creixent(int i, int j, int f, int c, const matriu& m) {
    while (i < f - 1 and j < c - 1) {
        if (m[i + 1][j + 1] <= m[i][j]) return false;
        ++i;
        ++j;
    }
    return true; //tot hi creix
}

//FUNCIO: comprovo diagonal principal (de Dreta a Esquerra i de Baix cap a Dalt)
//PRE: i, j indexos de la posicio des de la qual busquem (indexacio des d 0).
//     f nre de files, c nre columnes, m matriu.
//post: torna true si troba que la diagonal principal en sentit DEBD creix,
//     fals encas contrari (esquema de cerca)
bool DEBD_es_creixent(int i, int j, const matriu& m) {
    while (i > 0 and j > 0) {
        if (m[i - 1][j - 1] <= m[i][j]) return false;//trobat ja decreix.stop
        --i;
        --j;
    }
    return true; //tot hi creix
}


//es dedueix de les dos funcions anteriors
bool EDBD_es_creixent(int i, int j, int c, const matriu& m) {
    while (i > 0 and j < c - 1) {
        if (m[i - 1][j + 1] <= m[i][j]) return false;//trobat ja decreix.stop
        --i;
        ++j;
    }
    return true; //tot hi creix    
}

//es dedueix de les dos primeres funcions del programa
bool DEDB_es_creixent(int i, int j, int f, const matriu& m) {
    while (i < f - 1 and j > 0) {
        if (m[i + 1][j - 1] <= m[i][j]) return false;//trobat ja decreix.stop
        ++i;
        --j;
    }
    return true; //tot hi creix    
}

//integrem les quatre formes de buscar (cada un dels sentits definit sper
//cada una de les dues diagonals.
bool diagonals_son_creixents(int i, int j, int f, int c, const matriu& m) {
    if (EDDB_es_creixent(i,j,f, c, m)) {
        if (DEBD_es_creixent(i, j, m)) {
            if (EDBD_es_creixent(i, j, c, m)) {
                if (DEDB_es_creixent(i,j,f, m))
                    return true;
            }
        }
    }
    return false;
}


int main() {
    int f, c;
    while (cin >> f >> c) {
    
        matriu m(f,vector<int>(c));

        for (int i = 0; i < f; ++i) {
            for (int j = 0; j < c; ++j)
                cin >> m[i][j];
        }
        
        //entrem posicions del punt origen de cerca
        //indexacio des de zero
        int i, j;
        cin >> i >> j;
        
        //cridem la funcio que avalua si els DOS sentits de les
        //DUES diagonals tenen sempre nombres positius.
        if (diagonals_son_creixents(i,j,f, c, m))   cout << "yes";
        else                                        cout << "no";
        
        cout << endl;
    }
}
