#include <iostream>
using namespace std;



void imprimeix(int li, int ls){
    // procediment que imprimeix el limit inferior i superior
    // (li i ls respectivament)
    cout << '[' << li << ',' << ls << ']' << endl;
}


void torna_interval(int a1, int b1, int a2, int b2) {
    
    if (b1 < a2 or b2 < a1) cout << '[' << ']' << endl; //CAS 1, O CAS 2 DIBUIX
    else if (b1 == a2) imprimeix(b1, b1); //VEURE CAS 1 O CAS 2 DE NOU (LS i LI IGUALS)
    else if (b2 == a1) imprimeix(b2, b2); //VEURE CAS 1 O CAS 2 DE NOU (LS i LI IGUALS)
    else if (a1 <= a2 and b1 >= a2) { //aleshores a2 limit inferior (CAS 3)
        if (b2 >= b1) {
            imprimeix(a2, b1); //b1 limit superior
        }
        else { //b2 inferior estricte a b1. 
            imprimeix(a2, b2); //b2 limit superior
        }
    }
    else {//cas en que a2 <= a1 and b2 >= a2. Aaleshores a1 limit inferior (cas 4)         
        if (b2 >= b1) {
            imprimeix(a1, b1);
        }
        else {
            imprimeix(a1, b2);
        }
    }
}





int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    
    //faig el judici (es la funcio intervals (1) adaptada per a l'ocasio.
    if (a1 == a2 and b1 == b2)          cout << "= , "; //intervals iguals
    else if (a1 >= a2 and b1 <= b2)     cout << 1 << " , "; //primer dins el segon*
    else if (a2 >= a1 and b2 <= b1)     cout << 2 << " , ";
    else                                cout << '?' << " , ";
    
    //torno l'interval (es la funcio intervals (2) adaptada per a l'ocasio.
    torna_interval(a1, b1, a2, b2); //ja incorpora el endline (
    
}
