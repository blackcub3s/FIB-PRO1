#include <iostream>
using namespace std;

const double mig_cami = 0.5; //declaro constants fora el main!

int main() {
    double n;
    cin >> n;
    
    int floor = int(n);
    int ceil = int(n+1);
    
    if ((n - floor) >= mig_cami) { //recordo prioritat no obvia a la vista. Aplica?
        cout << floor << " " << ceil << " " << ceil;
    }
    else if (n == int(n)) { //perque cumpleixi cas 4...
        cout << floor << " " << floor << " " << floor;
    }
    else {
        cout << floor << " " << ceil << " " << floor;
    }
    
    cout << endl;
}
