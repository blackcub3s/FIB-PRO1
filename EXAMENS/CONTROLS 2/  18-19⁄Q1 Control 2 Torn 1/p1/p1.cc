#include <iostream>
using namespace std;

bool pairwise_sum(int x, int y) {
    //cas directe
    if (x < 100)    return ((x%10) + (x/10)%10) == y;
    //hipotesis induccio (cas recursiu)
    else {
        return ((x%10 + (x/10)%10) == y) and pairwise_sum(x/100, y);
    }
}

int main() {
    int x, y;
    while (cin >> x >> y) {
        if (pairwise_sum(x,y))  cout << "YES";
        else                    cout << "NO";
        
        cout << endl;
    }
    
}
