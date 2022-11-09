#include <iostream>
#include <string>
using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    
    if (n1 != n2 or n2 != n3)
        cout << "Loss";
    else {
        if (n1 == n2 and n2 == n3) {
            if (n1 % 2 == 0)
                cout << "Apples";
            else if (n1 % 2 != 0 and n1 % 3 == 0)
                cout << "Bananas";
            else
                cout << "Joker";
        }
    }
    cout << endl;
}
