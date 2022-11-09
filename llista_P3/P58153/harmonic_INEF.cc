#include <iostream>
using namespace std;

double calcul_harmonic(int n, int m) {//https://es.wikipedia.org/wiki/N%C3%BAmero_arm%C3%B3nico
    int i = 1;
    double sum = 0;
    while (i <= m) {
        sum = sum + 1.0/i;
        i = i + 1;
    }    
    
    double sum_m = sum;
    //reaprofito sumands
    
    while (i <= n) {
        sum = sum + 1.0/i;
        i = i + 1;
    }
    return sum - sum_m; //notis sum conte sum_n aqui
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);

    int n, m;
    while (cin >> n >> m)
         cout << calcul_harmonic(n, m) << endl;
}
