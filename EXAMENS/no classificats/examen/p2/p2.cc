#include <iostream>
using namespace std;

int main() {
    //primer el sequencia
    int a; 
    cin >> a;
    
    int cont_iguals = 1; //incloem el primer element
    int i = 2; //index posicions (la primera ens la saltem)
    int b;
    while (cin >> b) {
        if (b == a and i%2 != 0) ++cont_iguals;
        i = i + 1;
    }
    cout << cont_iguals << endl;
}
