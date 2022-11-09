#include <iostream>
#include <vector>
using namespace std;

const int TAMANY = 9; 

typedef vector< vector<int> > Matriu;

//DES DAQUI!
bool es_quadrat_correcte(const Matriu& m) {
     Matriu M(3,vector<int> (3));
     
}



bool es_sudoku_valid(const Matriu& m) {
    
    vector<bool> v(TAMANY,false);  
    
    //COMPROVO FILES
    for (int i = 0; i < TAMANY; ++i) {
        //introdueixo a la fila
        for (int j = 0; j < TAMANY; ++j) {
            v[m[i][j] - 1] = true;
        }
        //comprovo la fila
        for (int j = 0; j < TAMANY; ++j) {
            if (v[j] == false)  return false;
        }
        //reinicialitzo EL VECTOR
        vector<bool> v(TAMANY,false); 
    }
    
    
    
    //COMPROVO columnes
    for (int j = 0; j < TAMANY; ++j) {
        //introdueixo a la fila
        for (int i = 0; i < TAMANY; ++i) {
            v[m[i][j] - 1] = true;
        }
        //comprovo la fila
        for (int i = 0; i < TAMANY; ++i) {
            if (v[i] == false)  return false;
        }
        //reinicialitzo EL VECTOR
        vector<bool> v(TAMANY,false); 
    }
    //COMPROVO QUADRATS
    return es_quadrat_correcte(m); 
}
        




int main() {
    
    int n;
    cin >> n;
    
    int k = 0;
    while (k < n) {
        
        Matriu m(TAMANY, vector<int>(TAMANY));
        for (int i = 0; i < TAMANY; ++i) {
            for (int j = 0; j < TAMANY; ++j) {
                cin >> m[i][j];
            }
        }
        if (es_sudoku_valid(m))  cout << "yes" << endl;
        else                    cout << "no" << endl;
        ++k;
    }
}
