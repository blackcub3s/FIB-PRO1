#include <iostream>
using namespace std;

char encoded(char c, int k) {
    //sort de l'intèrpret de python i de que les funcions ord() i chr()
    //corresponen a les funcions del c++ int() i char() respectivament.
    int ample = int('z') + 1 - int('a'); //nre lletres min diccionari
    int dist_Mm = int('A') - int('a'); //distancia majuscules a minuscules
    return char(((int(c) - int('a') + k)%ample + dist_Mm) + int('a'));
}

int main() {
    int k;
    while (cin >> k) {
        char c = '@'; //caracter perquè entri xD
        while (c != '.') {
            cin >> c;
            if (int('a') <= c and c <= int('z'))
                cout << encoded(c,k);
            else{
                if (c == '_')       cout << ' ';
                else if (c == '.')  cout << endl; //salt de linia
                else                cout << c;
            }
        }
    }
}
