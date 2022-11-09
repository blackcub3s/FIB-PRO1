#include <iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    
    int pos_c = int(c);

    if ((int('A') <= pos_c and pos_c <= int('Z')) or (int('a') <= pos_c and pos_c <= int('z')))
        cout << "lletra";
    else if (int('0') <= pos_c and pos_c <= int('9'))
        cout << "digit";
    else
        cout << "res";
    
    cout << endl;
    
}
