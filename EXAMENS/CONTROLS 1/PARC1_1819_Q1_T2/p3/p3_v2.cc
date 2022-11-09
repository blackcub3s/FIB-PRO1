#include <iostream>
using namespace std;

int main() {
    int k;
    char c;
    
    cin >> k >> c;
    
    for (int n = 1; n <= k; ++n) {
        
        //primera linia
        for (int i = 1; i <= n; ++i)
            cout << c;
        cout << endl;

        
        //linies intermitges (es fan nomes quan
        //s'imprimeixen mes de dues linies
        if (k > 2) {
            for (int j = 1; j < n; ++j) {
                cout << c;  //primer caracter
                
                for (int i = 1; i < n; ++i)
                    cout << ' ';    //caracters en blanc
                    
                cout << c << endl; //ultim caracter
            }
                    //linia final   
            for (int i = 1; i <= n; ++i)
                cout << c;
        }
        

        cout << endl << endl;
        
            
    }
}
