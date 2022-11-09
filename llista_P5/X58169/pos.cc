#include <iostream>
using namespace std;


void infoSequence(int& max, int& lpos) {
    cin >> max;
    
    int i = 1;
    int n_aux = 1; //dummy valor
    while (n_aux > 0) {
        
        cin >> n_aux;
        
        ++i;
        
        if (n_aux >= max) {
            max = n_aux;
            lpos = i; 
        }
    }
}


bool troba_segona(int max, int& ipos) {
    int n = -1;
    int trobat = true;
    while (n != 0) {
        cin >> n;
        ++ipos;
        if (n == max)   return trobat;
    }
    return not trobat;
}



int main() {
    //avaluo primera sequencia i imprimeixo dades
    int max = 0;
    int lpos = 1;
    infoSequence(max, lpos);
    cout << max << ' ' << lpos;
    
    //avaluo segona sequencia i imprimeixo dades
    int ipos = 0;
    bool trobat;
    trobat = troba_segona(max,ipos);
    
    if (trobat)     cout << ' ' << ipos;
    else            cout << " -";

    cout << endl;
    
}
