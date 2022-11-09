#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    //triangle superior (linia mes ampla inclosa)
    for (int i = 1; i <= n; ++i) {
        
        //espais en blanc
        for (int j = 1; j <= n - i; ++j)
            cout << ' ';
        
        //asteriscs de l'esquerra
        for (int j = 1; j <= i - 1; ++j)
            cout << '*';

        //asterisc central (sempre impres)
        cout << '*';
        
        //asteriscs de la dreta
        for (int j = 1; j <= i - 1; ++j)
            cout << '*';

        cout << endl;
    }
    
    //triangle inferior (sense incloure linia mes ampla)
    //noteu que fem inferior a n, no inferior o igual a n per
    //a que no imprimeixi la linia mes ampla.
    // nomes cal copiar i pegar el codi anterior pero
    // substituir la condicio d'inici i acabament del 
    // for de la linia 9 tal i com esta a continuacio.
    
    for (int i = n-1; i >= 1; --i) {
        
        //espais en blanc
        for (int j = 1; j <= n - i; ++j)
            cout << ' ';
        
        //asteriscs de l'esquerra
        for (int j = 1; j <= i - 1; ++j)
            cout << '*';

        //asterisc central (sempre impres)
        cout << '*';
        
        //asteriscs de la dreta
        for (int j = 1; j <= i - 1; ++j)
            cout << '*';

        cout << endl;
    }    
}
