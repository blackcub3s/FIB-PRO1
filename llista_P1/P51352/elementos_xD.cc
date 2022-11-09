#include <iostream>
using namespace std;

char arbitre(char j1, char j2){
    
    //cas empat
    if (j1 == j2)                   return '-'; 
    
    //cas que guanya 1
    if (j1 == 'A' and j2 == 'P') {
        return '1';
    }
    else {
        if (j1 == 'P' and j2 == 'V') {
            return '1';
        }
        else {
            if (j1 == 'V' and j2 == 'A') {
                return '1';
            }
        }
    }
    //cas que guanya 2
    return '2';
}

int main() {
    char jugador1, jugador2;
    cin >> jugador1 >> jugador2;
    
    cout << arbitre(jugador1, jugador2) << endl;
}
