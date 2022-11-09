#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    

    int sum = 0;
    int i = 1;
    while (i <= n) {
        char c1, c2, c3;
        cin >> c1; 
        cin >> c2;
        cin >> c3;

        if (c3 == '/') { 
            if (c1 != '/')        sum = sum + 1;
            else 
                if (c2 == '/')    sum = sum + 1;
        }
        
        i = i + 1;
    }
    cout << sum << endl;
     
}
