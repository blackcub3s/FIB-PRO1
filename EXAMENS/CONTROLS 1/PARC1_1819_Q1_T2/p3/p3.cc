#include <iostream>
using namespace std;

int main() {
    int n;
    char c;
    
    cin >> n >> c;
    
    //n es superior o igual a 1, per tant primer cas es donara sempre
    cout << c << endl;
    
    int k = 2;
    while (k <= n) { //imprimeixo files
        //cas n = 2
        if (k == 2) {
            cout << endl;
            cout << c << c << endl;
            cout << c << c << endl;
        }
        else if (k > 2) {
            //imprimeixo primera fila
            cout << endl;
            for (int i = 1; i <= k; ++i)
                cout << c;
            cout << endl;
            
            //imprimeixo files intermitjes
            for (int j = 1; j <= k - 2; ++j) {
                cout << c;
                for (int i = 2; i < k; ++i)
                    cout << ' ';
                cout << c << endl;
            }
            
            
            //imprimeixo fila final
            for (int i = 1; i <= k; ++i)
                cout << c;
            cout << endl;
        }
        k = k + 1;
    }
    cout << endl;
}

    

