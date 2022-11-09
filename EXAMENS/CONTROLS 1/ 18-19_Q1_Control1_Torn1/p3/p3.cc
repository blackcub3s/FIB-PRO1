#include <iostream>
using namespace std;

int main(){
    
    int n;
    char c1, c2;
    
    while (cin >> n >> c1 >> c2) {

        //dibuixo l'square
        for (int i = 1; i <= n; ++i) {
            
            //imp primer caracter
            for (int j = 1; j < i; ++j)
                cout << c1;
            
            //imp segon caracter
            for (int j = i; j <= n; ++j) 
                cout << c2;
            
            //imp salts de linia (dins blocs)
            cout << endl;
        }
        
        cout << endl; //imp final linia ENTRE blocs
        
    }
}
