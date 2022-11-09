#include <iostream>
using namespace std;


/*
 Tens aquesta segquencia d'entrada. EN eseencia una linia amb dos entres
 que t'indica les files i columnes (respecitvament) de la matriu que tens sota.
 La matriu de sota té enters disposats sense espais aixi. 
 
 
 3 4 
 
 34567
 78564
 33232
 
 fes cout amb la suma dels nombres de la matriu.
 Fes cout amb la suma dels nombres que ocupen columnes parell.
 
 */
int main() {
    int f,c; //files, columnes
    cin >> f >> c;
    
    //recorro files:
    int sum_tot = 0;
    int sum_par = 0;
    bool columna_parell = (c%2 == 0); //true quan la matriu té nombre parell de files
    for (int i = 1; i <= f; ++i) {
        //pillo tota una fila
        int fila; 
        cin >> fila;
        //trocejo la fila (recorro columnes)
        for (int j = 1; j <= c; ++j) {
            int n_ij = fila%10;
            sum_tot = sum_tot + n_ij; //acumulo tots els nombres n_ij de la matr
            if ((columna_parell == false) and (j%2 == 0)) { //si estic en columna parell, acumulo
                sum_par = sum_par + n_ij;
            }
            else if ((j%2 != 0) and (columna_parell == true)) {
                sum_par = sum_par + n_ij;
            }
            fila = fila/10;
        }
    }
    cout << sum_tot << ' ' << sum_par << endl;
}
