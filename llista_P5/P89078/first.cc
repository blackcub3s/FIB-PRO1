#include <iostream>
using namespace std;

int main() {
    int n = 1;//inicialitzo a 1 perquè entri al while
    int i = 0; //posicio
    while (n%2 != 0) {
        i = i + 1;        
        cin >> n;
    }
    cout << i << endl;
}
