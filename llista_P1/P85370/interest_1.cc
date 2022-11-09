#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    double c, i; //son estrictament positius (capital inicial i interes en %)
    int t; // temps en anys
    string tipus_interes; //string "simple" o "compound"
    
    cin >> c >> i >> t >> tipus_interes;
    
    if (tipus_interes == "simple")      cout << c + c*(i/100)*t;
    else {  //cas interes compost
        int j = 0;
        while (j < t) { //poso inferior estricte pq quan t = 0 no hi ha pas anys a calcular interes.
            c = c*(1 + i/100);
            j = j + 1;
        }
        cout << c;
    }                             
    cout << endl;
}
