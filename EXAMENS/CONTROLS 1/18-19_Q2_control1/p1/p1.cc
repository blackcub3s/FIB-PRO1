#include <iostream>
using namespace std;

int main() {
    int n;
    int positive = 0;
    int negative = 0;
    int total = 0;
    
    //mirem nombre a nombre
    while (cin >> n) {
        
        //classifiquem nombres a les variables corresponents
        if (n > 0)      positive = positive + 1;
        else if (n < 0) negative = negative + 1;
        total = total + 1;
        
    }
    //imprimim resultat
    cout << "Pos: " << positive << endl;
    cout << "Neg: " << negative << endl;
    cout << "Tot: " << total << endl;
    

}
