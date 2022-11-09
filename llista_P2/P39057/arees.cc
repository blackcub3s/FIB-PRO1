#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    
    int n;
    cin >> n;
    
    int i = 1;
    while (i <= n) {//recorro files
        string figura;
        cin >> figura; //rectangle o cercle
        if (figura == "rectangle") {
            double base, altura;
            cin >> base;
            cin >> altura;
            cout << base*altura;
        }
        else { //cas cercle
            double radi;
            cin >> radi;
            cout << M_PI*radi*radi;
        }
        cout << endl;
        i = i + 1;
    }
}
