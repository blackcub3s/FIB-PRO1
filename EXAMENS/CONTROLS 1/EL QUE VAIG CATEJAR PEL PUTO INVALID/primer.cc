#include <iostream>
using namespace std;

/*
 
HE TARDAT 8 MINUTS... I A L'XAMEN NO EL SABIA FER XD
Tens una sequencia de l'estil (esquerra) que retorna (dreta). Fes-ho

suma 2.3 7   9.3000
resta 8 9   -1.0000
suma 6 6    12.0000
nega 3      -3.0000

*/ 
int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    string paraula;
    paraula = ""; //MOLT MILLOR QUE NO LA MERDA QUE DIUEN ELS PROFES PENSO. SI NO HAGUES FET CAS APROVAVA.
    while ((cin >> paraula) and paraula != "final") {
        if (paraula == "nega") {
            double a;
            cin >> a;
            cout << -a;
        }
        else {
            double a, b;
            cin >> a >> b;
            if (paraula == "suma")          cout << a + b;
            else if (paraula == "resta")    cout << a - b;
        }
        cout << endl;
    }
}
