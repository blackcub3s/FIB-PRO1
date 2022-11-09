#include <iostream>
#include <vector>
using namespace std;


double scalar_product(const vector<double>& u, const vector<double>& v) {
    double suma_escalar = 0;
    int n = v.size(); //podia ser tambe u.size
    for (int i = 0; i < n; ++i) {
        suma_escalar = suma_escalar + u[i]*v[i];
    }
    return suma_escalar;
}
    
int main() {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<double> u(n);
        vector<double> v(n);
        for (int i = 0; i < n; ++i) cin >> u[i];
        for (int i = 0; i < n; ++i) cin >> v[i];
        cout << scalar_product(u, v) << endl;
    }
}
