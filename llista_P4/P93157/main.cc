#include <iostream>
using namespace std;


bool read_rational(int& num, int& den) {
    //algoritme de euclides para quan el residu es 0
    //bibliografia: https://www.youtube.com/watch?v=VWOUh4w_zVI
    char barra_molesta;
    if (cin >> num >> barra_molesta >> den) {
        
        int a = num;
        int residu = den;
        
        while (residu != 0) {
            int aux = residu;
            residu = a % residu;
            a = aux;
        }
        
        num = num/a; //a aqui es el divisor mes gran comu per a num i den. 
        den = den/a;
        
        return true;
        }
    return false;
}

    int main() {
    int num, den;
    while (read_rational(num, den)) cout << num << ' ' << den << endl;
    }
