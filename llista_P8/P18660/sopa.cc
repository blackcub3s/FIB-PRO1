#include <iostream>
#include <vector>
#include <string>
using namespace std;


//NOTA. CONSEGUIDES HORITZONTAL I VERTICAL. DIAGONAL NO...

//a te codi mes gran. A es mes petit.
const int DIST_MAJ_MIN = int('a') - int('A'); 

typedef vector< vector<char> > matriu;


bool es_majuscula(char lletra) {
    if (('A' <= lletra) and ('Z' >= lletra))  return true;
    return false;
}

    //funcio que transforma un caracter de majuscula a minuscula
char trans(char ll) {
    if ('A' <= ll and 'Z' >= ll)    return ll + DIST_MAJ_MIN;
    return ll - DIST_MAJ_MIN;
}
void imprimir_matriu(const matriu& M, int files, int columnes) {
    for (int i = 0; i < files; ++i) {
        for (int j = 0; j < columnes - 1; ++j) {
            cout << M[i][j] << ' ';
        }
        cout << M[i][columnes - 1] << endl;
    }
}

//pre: M es la matriu sopa de lletres. par es una paraula la primera 
//     lletra de la qual coincideix amb Mij. m files. n cols. i, j
//     son indexos de la lletra coincident de M.
//post: M es la matriu modificada si par es troba dins M.
//      En cas contrari no es modifica.
//que fa: fa els tres recorreguts horitzontals, verticals i en diagonal.

void recorregut_hvd(matriu& M, string par,int m, int n, int i, int j) {
    int long_par = par.length();
    
    
    
    //RECORREGUT HORITZONTAL (d'esquerra a dreta)
    if (long_par <= n - j) {
        int k = j + 1; //no miro la paraula central 
        int l = 1;     //el init coincideix per aixo busco des d'1.
        bool trobada_lletra_diferent = false;
        while ((k < n - 1) and not trobada_lletra_diferent) {
            if (M[i][k] != par[l])    trobada_lletra_diferent = true;
            ++k;
            ++l;
        }
        
        //     transformo a majuscula
        if (not trobada_lletra_diferent) {
            for (int k = j; k < long_par + j; ++k) {
                M[i][k] = char(int(M[i][k]) - DIST_MAJ_MIN);
            }
        }
    }
    
    
    
    
    //RECORREGUT VERTICAL (de dalt a baix)
    //   igual que abans pero canvio i per j
    //   als fors i canvio M[i][k] per M[k][j] 
    if (long_par <= m - i) {
        
        
        int k = i + 1; //no miro la paraula central 
        int l = 1;     //el init coincideix per aixo busco des d'1.
        bool trobada_lletra_diferent = false;
        while ((k < m - 1) and not trobada_lletra_diferent) {
            if (M[k][j] != par[l])    trobada_lletra_diferent = true;
            ++k;
            ++l;
        }
        
        //     transformo a majuscula
        if (not trobada_lletra_diferent) {
            for (int k = i; k < long_par + i; ++k) {
                if (not es_majuscula(M[k][j])) {
                    M[k][j] = char(int(M[k][j]) - DIST_MAJ_MIN);
                }
            }
        }     
    }
    


    
    //RECORREGUT EN DIAGONAL (pendent descentent) // PORQUERIA DE LES MAJUSCUES
    if (long_par <= m - i and long_par <= n - j) {
        
        
        int k_i = i + 1; //no miro la paraula central 
        int k_j = j + 1;
        int l = 1;     //el init coincideix per aixo busco des d'1.
        bool trobada_lletra_diferent = false;
        while ((k_i < m - 1 and k_j < n - 1) and not trobada_lletra_diferent) {
            M[k_i][k_j] = trans(M[k_i][k_j]);
            if (M[k_i][k_j] != par[l]) {
                trobada_lletra_diferent = true;
            }
            ++k_i;
            ++k_j;
            ++l;
        }
        
        //     transformo a majuscula
        if (not trobada_lletra_diferent) {
            int k_i = i;
            int k_j = j;
            while (k_i < long_par + i and k_j < long_par - j) {
                
                if (not es_majuscula(M[k_i][k_j])) {
                    M[k_i][k_j] = char(int(M[k_i][k_j]) - DIST_MAJ_MIN);
                    
                }
                ++k_i;
                ++k_j;
            }
        }     
    }
}

// pre: M matriu amb la sopa de lletres, v vector de strings -paraules a busc
// m nombre de files. n nombre de columnes.
// post: M es matriu amb la sopa de lletres amb paraules MARCADES en majuscula
void reemplasa(matriu& M, vector<string> v, int m, int n, int nre_paraules) {
    nre_paraules = v.size();
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < nre_paraules; ++k) {
                //si trobo que la lletra ij de la sopa coincideix amb 
                //la primera lletra d'una de les paraules buscades
                //crido una funcio que fa la cerca i reemplasa
                if (M[i][j] == v[k][0])    recorregut_hvd(M,v[k],m,n,i,j);
            }
        }       
    }
}


int main() {
    int x, m, n; //x nre paraules buscades. m files. n columnes.
    while (cin >> x >> m >> n) {
        
        //declaro vector de paraules buscades (v) i dono longitud que tindra
        vector<string> v(x);
        for (int i = 0; i < x; ++i)     cin >> v[i];
        
        //declaro ara el vector que contindra la matriu (m)de sopa de lletres
        //amb m files i n columnes.
        matriu M(m, vector<char>(n));
        
        //introdueixo els elements de la matriu dins la matriu
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) 
                cin >> M[i][j];
        }        
        
        reemplasa(M,v,m,n,x); //cerca i reemplasa les paraules de v a M
        imprimir_matriu(M,m,n);  //self explanatory
        //calia lendline?
        
        //recorro
        
    }
}
