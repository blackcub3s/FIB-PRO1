#include <iostream>
using namespace std;

const int dif_min_maj = int('a') - int('A');

int main() {
    char ll;
    cin >> ll;
    
    if (ll >= int('a') and ll <= int('z')) { //lletra minuscula
        cout << char(int(ll) - dif_min_maj);
    }
    else {
        cout << char(int(ll) + dif_min_maj);
    }
    
    cout << endl;
}
