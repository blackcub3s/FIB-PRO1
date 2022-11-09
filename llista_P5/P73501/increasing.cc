#include <iostream>
using namespace std;

int conta_parells_superiors() {
    int a;
    cin >> a;
    
    int suma_parells = 0;
    int b;
    while (cin >> b) {
        if (b > a) {
            ++suma_parells;
        }
        a = b;
        if (b == 0) return suma_parells;
    }
    return suma_parells; //pq el jutge no es queixi

}

int main() {
    int fi_seq;
    cin >> fi_seq;
    
    for (int i = 1; i <= fi_seq; ++i) {
        cout << conta_parells_superiors() << endl;
    }
}
