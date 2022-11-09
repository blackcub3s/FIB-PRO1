#include <iostream>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
    
    if (x > y) { //si x es superior a y, faig variable swap on x sera y i viceversa.
        int z = x;
        x = y;
        y = z;
    }
        
    for (int i = y; i >= x; --i){
        cout << i << endl;
    }
}
