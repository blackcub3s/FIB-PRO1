#include <iostream>
using namespace std;

int abundance(int x) {
    if (x == 1)
        return 0;
    else {
        int i = 2;
        int sum = 1; //suma es 1 perque sempre puc dividir per 1 i ja el conto
        while (i < x) {
            int residu = x % i;
            if (residu != 0)
                sum = sum + residu; //acumulo divisors 
            i = i + 1;
        }
        sum = sum - x;
        
    //retornem els resultats
    if (sum < 1)
        return 0;
    else
        return sum;
}


int main() {
   int x,y;
   while (cin >> x >> y) {
        int ax = abundance(x);
        int ay = abundance(y);
        
        cout << ax << ' ' << ay << ' ';
        if (ax == ay)
            cout << "friends";
        else
            cout << "not friends";
        
        cout << endl;
        
   }
}
