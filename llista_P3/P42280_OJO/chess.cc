#include <iostream>
using namespace std;

int main() {
    int r, c; //rows, columns
    cin >> r >> c;
    
    int sum = 0;
    int i = 0;
    int ascii_0 = int('0'); //busco on esta el zero a la taula asci
    
    while (i < r) {//recorro rows (files)
        int j = 0;
        while (j < c) {//recorro columns
            char caracter;
            cin >> caracter;
            
            sum = sum + (int(caracter) - ascii_0); //passo de caracter a nombre.
            j = j + 1;
        }
        
        i = i + 1;
    }
    
    cout << sum << endl;
}



