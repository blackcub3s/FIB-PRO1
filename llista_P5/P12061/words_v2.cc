#include <iostream>
using namespace std;

int main() {
    string word;
    bool trobat_ini = false;
    bool trobat_fin = false;
    
    int i = -2; //no conto el primer ni el segon (per aixo menys 1)
    while (cin >> word and (not trobat_fin)) {
        if (not trobat_ini)
            trobat_ini = (word == "beginning");
        trobat_fin = (word == "end");
        if (trobat_ini)    ++i;
        if (trobat_fin and not trobat_ini)  break; //ale amb break xD
    }
    if (not trobat_ini or not trobat_fin)   cout << "wrong sequence" << endl;
    else                                    cout << i << endl;
}
