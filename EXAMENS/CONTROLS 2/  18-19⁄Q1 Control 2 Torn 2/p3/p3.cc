#include <iostream>
using namespace std;

bool divisors_odd(int x, int y) {
    //cas directe
    if (x<100) {
        if(y%(x%10) == 0) return true;
        else              return false;
    }
    //hipotesis induccio (cas recursiu)
    else {
        return (y%(x%10) == 0) and divisors_odd(x/100, y);
    }
}


int main() {
    int x, y;
    while (cin >> x >> y) {  
        if (divisors_odd(x,y))  cout << "YES" << endl;
        else                    cout << "NO" << endl;
    }
}
