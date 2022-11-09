#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    int sum = 0;
    while (cin >> n1 >> n2 >> n3){
        
        if (n1 == n2 and n2 == n3) {
            if (n1 % 2 == 0)
                sum = sum + 10;
            else if (n1 % 2 != 0 and n1 % 3 == 0)
                sum = sum + 15;
            else
                sum = sum + 5;
        }
    }
    cout << sum << endl;
    
}
