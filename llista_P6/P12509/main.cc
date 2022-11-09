#include <iostream>
using namespace std;


int factorial(int n) {
    //cas directe
    if (n == 0) return 1;
    //hipotesis induccio
    else {
        return n*factorial(n-1);
    }
}


int main() {
    int x;
    while (cin >> x) {
        cout << factorial(x) << endl;
}   }

