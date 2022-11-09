#include <iostream>
using namespace std;

int main() {
    int n;
    char c;
    
    cin >> n >> c;
    

    int j = 0;
    while (n >= 0) {
        
        //imprimeixo espais en blanc de la fila
        for (int i = 1; i <= j; ++i)
            cout << ' '; 

        //imprimeixo caracters c i punts (menys l'ultim, que no te punt).
        for (int i = 1; i < n; ++i)
            cout << c << '.';
        cout << c << endl; //imprimeixo ultim caracter fila
        
        n = n - 2; //a cada fila trec caracters per la dreta i l'esquerra
        j = j + 2; //usat per a imprimir els espais
    }
    
    
    
}
