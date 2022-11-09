#include <iostream>
using namespace std;


int main() {
    char ll;
    cin >> ll;
    
    if (ll >= int('a') and ll <= int('z')) cout << "lowercase";
    else cout << "uppercase";
    
    cout << endl;
    
    if (ll == 'a' or ll == 'e' or ll == 'i' or ll == 'o' or ll == 'u') cout << "vowel";
    else if (ll == 'A' or ll == 'E' or ll == 'I' or ll == 'O' or ll == 'U') cout << "vowel";
    else cout << "consonant"; 
    
    cout << endl;
}
