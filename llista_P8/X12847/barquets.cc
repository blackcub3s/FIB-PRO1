#include <iostream>
#include <vector>
using namespace std;

//DEFINEIXO CONSTANTS PRIMER
const int FILES = 10;
const int COLS = 10;
const int BARCOS = 10;
const string MISS_NO_TOC = " aigua! vaixell mes proper a distancia ";
//DEFINEIXO TYPEDEF
typedef vector< vector<bool> > Tauler;


void emplena_tauler(Tauler& m) {
    int cont = 0;
    while (cont < BARCOS) {
        char i_ini, orient_b;
        int j_ini, llarg_b;
        
        cin >> i_ini >> j_ini >> llarg_b >> orient_b;
        
        i_ini = int(i_ini) - int('a');
        j_ini = j_ini - 1;
        
        //barco horitzontal
        if (orient_b == 'h') {
            for (int j = 0; j < llarg_b; ++j)
                m[i_ini][j_ini + j] = true;
        }
        
        //barco vertical
        if (orient_b == 'v') {
            for (int i = 0; i < llarg_b; ++i)
                m[i_ini + i][j_ini] = true;
        }        
        cont++;
    }
}


void imprimeix_tauler(const Tauler& m) {
    cout << "  12345678910" << endl;
    for (int i = 0; i < FILES; ++i) {
        cout << char(int('a') + i) << ' ';
        for (int j = 0; j < COLS; ++j) {
            if (m[i][j])    cout << 'X';
            else            cout << '.';
        }
        cout << endl;
    }
}

//post:   torna un vector amb la posicio mes propera
//que fa: cerca en bombolles des del punt de tir.
//CONTINUA AQUESTA FUNCIO
vector<int> dist(const Tauler& m, int i, int j) {
    vector<int> v(2,-1);
    if (i < FILES - 1)
        if (m[i+1][j])  //RETORNA EL i+1 jTROBAT
    else if (i > 0)
        if (m[i-1][j])  //TROBAT
}

void barco_enfonsat(const Tauler& m, char i, int j) {
    int i_prima = int(i) - int('a');
    if (m[i_prima][j - 1])    cout << i << j << " tocat!";    
    else                      cout << i << j << dist(i_prima, j - 1) << 999;
    cout << endl;
    
}


int main() {
    //inicialitzo la matriu (tauler de booleans)
    //donant-li dimensions i valors inicials -false-
    //(false pq no hi ha encara vaixells posats)
    Tauler m(FILES, vector <bool> (COLS, false));
    
    emplena_tauler(m);
    imprimeix_tauler(m);
    
    char i;
    int j;
    while (cin >> i >> j) {
        barco_enfonsat(m,i,j);
    }
    
    
    
}
