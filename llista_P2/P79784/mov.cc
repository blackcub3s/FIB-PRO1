#include <iostream>
using namespace std;

int main() {
    string c;
    cin >> c;
    
    int longitud_string = c.length();
    int i = 0;
    int primer = 0;
    int segon = 0;
    while (i < longitud_string) {
        
        if (c[i] == 'n')        segon = segon - 1;
        else if (c[i] == 's')   segon = segon + 1;
        else if (c[i] == 'e')   primer = primer + 1;
        else                    primer = primer - 1; //cas c == w (ojo que el punt suma per error el primer en negatiu...)
        
        i = i + 1;
    }
    
    cout << '(' << primer << ", "<< segon << ')'<< endl;
}
