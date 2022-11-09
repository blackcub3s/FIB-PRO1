#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int i = 0;
    while (i < n) {//bucle files
        int j = 0;
        while (j <= i) {//bucle columnes
            cout << '*';
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    
}
