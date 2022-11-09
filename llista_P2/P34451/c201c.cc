#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x; //x es l'enter que volem comparar amb la resta d'elements de la sequencia.
    
    int y;
    int contador = 0;
    while (cin >> y) { //y es cada un dels elements restants
        if (y % x == 0)     contador = contador + 1; //y modul x o, el mateix, x és multiple de y.
    }
    
    cout << contador << endl;
}
