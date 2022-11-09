#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    
    double n;
    double sum = 0;
    int i = 0;
    while (cin >> n) {
        sum = sum + n;
        i = i + 1;
    }
    cout << sum/i << endl;
}
