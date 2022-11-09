#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    int i = 1;
    double sum = 0;
    double terme;
    
    while (i <= n) {
        terme = 1.0/i; //era clau fer divisio real
        sum += terme;
        i = i + 1;
    }
   
    cout.setf(ios::fixed,ios::floatfield); // de stackoverflow
    cout.precision(4); // de stackoverflow
    
    cout << sum << endl;
}
