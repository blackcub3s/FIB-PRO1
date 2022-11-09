#include <iostream>
using namespace std;

int main() {
    string par;
    
    //booleans que canviaran a true quan
    //es trobi la PRIMERA ocurrencia de cada 
    //un dins el text:
    bool catboy = false;
    bool owlette = false;
    bool gekko = false;

    while (cin >> par and not (catboy and owlette and gekko)) {
        if (par == "Catboy" and not catboy) { 
            catboy = true;
            cout << "Catboy" << endl;
        }
        else if (par == "Owlette" and not owlette) {
            owlette = true;
            cout << "Owlette" << endl;
        }
        else if (par == "Gekko" and not gekko) {
            gekko = true;
            cout << "Gekko" << endl;
        }
    }
}
