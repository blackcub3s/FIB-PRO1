#include <iostream>
using namespace std;

void reverteix() {
    string par;
    while (cin >> par) {
        reverteix();
        cout << par << endl;    
    }    
}

int main() {
    reverteix();
}