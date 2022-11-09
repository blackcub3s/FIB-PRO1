#include <iostream>
using namespace std;


int factorial (int n) {
    //cas conveni
    if (n == 0)
        return 1;
    //resta de casos
    int i = n;
    while (i > 2){
        i = i - 1;
        n = n*i;
    }
    return n;
}


int main () {
    int x;
    while (cin >> x) {
        cout << factorial(x) << endl;

    }
}



