#include <iostream>
using namespace std;

int main() {
    int pos;
    cin >> pos;
    //per simplificar assigno valor qualsevol a n en comptes
    // de liar la troca posant un cin >> al principi per ja
    // anar processant el primer element de la seqüència. M'entenc
    // més i, tot i que em baixi nota a la correcció, així ho prefereixo.
    int n = 0;
    int i = 1;
    while (n != -1 and i <= pos) {
        cin >> n;
        i = i + 1;
    }
    cout << "At the position " << pos << " there is a(n) " << n << '.' << endl; 
}
