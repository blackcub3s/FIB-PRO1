#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    int longitud = n.length();
    int i = 0;
    int sum = 0;

    while (i < longitud){
        sum = sum + n[longitud -1 - i];
        i = i + 2;
    }
    
    if (sum % 2 == 0)    cout << n << " IS COOL";
    else                 cout << n << " IS NOT COOL";
    
    cout << endl;
}
