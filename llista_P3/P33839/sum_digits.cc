#include <iostream>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        cout << "The sum of the digits of " << n;
        
        int sum = 0;
        while (n != 0) {
            sum = sum + n%10;
            n = n/10;
        }
        
        cout << " is " << sum << '.' << endl;
    }
}
