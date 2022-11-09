#include <iostream>
#include <string>
using namespace std;

int main() {
    string n_a, n_b; //noma i nomb
    cin >> n_a >> n_b;
    
    if (n_a > n_b) cout << n_a << " > "<< n_b;
    else if (n_a < n_b) cout << n_a << " < "<< n_b;
    else cout << n_a << " = " << n_b;
    
    cout << endl;
}

