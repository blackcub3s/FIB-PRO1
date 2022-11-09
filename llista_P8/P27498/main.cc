#include <vector>
#include <iostream>
using namespace std;

typedef vector< vector<int> > Matrix;

//recorro triangle inferior, en llegeixo valors, i modifico l'inferior
//amb els primers, 
//per fer-ne la simetria amb respecte la diagonal principal de la matriu.
void transpose(Matrix& M) {
    int n_files = M.size();
    int n_columnes = M[0].size();
    for (int i = 0; i < n_files - 1; ++i) {
        for (int j = 1 + i; j < n_columnes; ++j) {
            int aux = M[i][j];
            M[i][j] = M[j][i];
            M[j][i] = aux;
        }
    }
}


int main ()
{
    int n;
    while (cin >> n) {
        vector< vector<int> > M(n, vector<int>(n));
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cin >> M[i][j];
        }   }
        transpose(M);
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }   
        cout << endl;
    }
}
