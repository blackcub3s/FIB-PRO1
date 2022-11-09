#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > tipus_matriu; //ojo que quan es nested va amb espais

//pre: fila a imprimir
//post: void
//que fa: imprimeix la fila demanada a pre
void imprimir_fila(const tipus_matriu& m, int i, int c) {

    i = i - 1; //convertim a indexacio 0
    //recorrem els elements de la fila i (i es fix)
    for (int j = 0; j < c; ++j)  cout << ' ' <<  m[i][j];
    cout << endl;
}


void imprimir_columna(const tipus_matriu& m, int j, int f) {
    //recorrem els elements de la columna j (j es fix)
    j = j - 1; //convertim a indexacio 0
    for (int i = 0; i < f; ++i)    cout << ' ' <<  m[i][j];
    cout << endl;    
}

void imprimir_element(const tipus_matriu& m, int i, int j) {
    i = i - 1;
    j = j - 1;
    cout << ' ' << m[i][j] << endl;
}

int main() {
    int f,c; //files, colimnes
    cin >> f >> c;
    
    tipus_matriu m(f,vector<int> (c));
    
    //empleno la matriu
    for (int i = 0; i < f; ++i) { //indexs que identifiquen files
        for (int j = 0; j < c; ++j) //indexs que identifiquen columnes
            cin >> m[i][j];
    }
    
    //miro consultes
    string paraula;
    while (cin >> paraula) {
        cout << paraula;
        if (paraula == "fila") {
            int fila;
            cin >> fila;
            cout << ' ' << fila << ':';
            imprimir_fila(m, fila, c);
        }
        else if (paraula == "columna") {
            int columna;
            cin >> columna;
            cout << ' ' << columna << ':';
            imprimir_columna(m, columna, f);
        }
        else {//element
            int fila, columna;
            cin >> fila >> columna;
            cout << ' ' << fila << ' ' << columna << ':';
            imprimir_element(m, fila, columna);
        }
    }
    
}
