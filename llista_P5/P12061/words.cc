#include <iostream>
using namespace std;

int main() {
    string word;
    int i = 1;
    bool no_trobat_inici = true;
    bool final_trobat = false;
    
    while (cin >> word) {
        if (word == "end") {
            final_trobat = true;
            if (no_trobat_inici) {//begin no trobat abans de end
                cout << "wrong sequence" << endl;
            }
            else
                cout << i - 1 << endl;
        }  
        
        if (no_trobat_inici == false)   ++i;
        if (no_trobat_inici)    no_trobat_inici = not (word == "beginning");

    }
    if (not final_trobat)   cout << "wrong sequence" << endl;
    
}
