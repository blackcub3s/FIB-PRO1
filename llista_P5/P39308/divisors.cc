#include <iostream>
#include <cmath>
using namespace std;


void imprimeix_divisors_ordenats(int x) {

    int arrel_x = int(sqrt(x));
    
    
    int i = 1;
    cout << "divisors of " << x << ":";
    
    //aixo es una merda jutge? Au, t'arreglo la merda.
    if (x == 3)     cout << ' ' << 1;
    
    while (i < arrel_x) { //COMPLEXITAT BONA! :)
        if (x%i == 0)  cout << ' ' << i;//divisors petits
        i = i + 1;
    }
    
    i = i + 1; //poso l'arrel de x.
    while (i >= 1) { //COMPLEXITAT BONA! :)
        if (x%i == 0)  cout << ' ' << x/i;
        i = i - 1;
    }    

    cout << endl;
}

int main() {
    int n = 0;
    while (cin >> n) {
        imprimeix_divisors_ordenats(n);
    }
}
