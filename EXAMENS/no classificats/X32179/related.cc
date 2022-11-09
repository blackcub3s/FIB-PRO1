#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;//em menjo el primer
    cin >> a;//ara hi ha el segon aqui
    
    int i = 3;//posicio del primer b absorbit
    int contador = 1;
    
    int b;
    while(cin >> b) {
        if (b == a and i%2 == 0) ++contador;
        ++i;

    }
    cout << contador << endl;
}
