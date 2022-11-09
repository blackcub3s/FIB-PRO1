#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int i = 1;
    int sum = 0;
    while (i <= 3){
        sum = sum + n%10;
        n = n/10;
        i = i + 1;
    }
    cout << sum << endl;
}
