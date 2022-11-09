#include <iostream>
using namespace std;

int main() {
    int n;
    char c;
    
    cin >> n >> c;
    
    //we write the upper part
    
    int i = 1;
    int j = n/2 - 1; //j conte espais blancs incials entre lletres
    
    while (i <= n/2) {
        
        //blancs esquerra primer c
        for (int k = 1; k < i; ++k)
            cout << '.';
        
        //imp primer c
        cout << c;
        
        //blancs dreta primer c (****)
        for (int k = 1; k <= j; ++k)
            cout << '.';
        
        //imp segon c
        cout << c;
        
        //blancs dreta segon c (igual a for dels asteriscs ****)
        for (int k = 1; k <= j; ++k)
            cout << '.';
        
        //imp tercer c
        cout << c;
        //blancs dreta ultim c
        for (int k = 1; k < i; ++k)
            cout << '.';
        
        //MOLT IMPORTANT: SALT DE LINIA PER CADA FILA
        cout << endl;
        
        i = i + 1;
        j = j - 1;
    }
        
    //we write the middle part (row n/2 + 1) [INTEGER DIVISION]
    for (i = 1; i <=n; ++i)
        cout << c;
    cout << endl;
    
    //we write the lower part
    i = n/2;
    j = n/2 - 1;
    int l = 0;
    while (i >= 1) {
        
        //blancs esquerra primer c
        for (int k = 1; k < i; ++k)
            cout << '.';
        
        //imp primer c
        cout << c;
        
        //blancs dreta primer c (****)
        for (int k = 0; k < l; ++k)
            cout << '.';
        
        //imp segon c
        cout << c;
        
        //blancs dreta segon c (igual a for dels asteriscs ****)
        for (int k = 0; k < l; ++k)
            cout << '.';
        
        //imp tercer c
        cout << c;
        
        //blancs dreta ultim c
        for (int k = 1; k < i; ++k)
            cout << '.';
        
        //MOLT IMPORTANT: SALT DE LINIA PER CADA FILA
        cout << endl;    
        
        
        i = i - 1;
        j = j + 1;
        l = l + 1;
    }
}
