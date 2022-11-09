#include <iostream>
#include <cmath>
using namespace std;

double a_radians(double theta) {
    return theta*M_PI/180;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    
    double angle;
    while (cin >> angle) {
        angle = a_radians(angle);
        cout << sin(angle) << ' ' << cos(angle) << endl;
    }
}
