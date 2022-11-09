#include <iostream>
using namespace std;

int max_2(int x, int y) {
    if (x > y)  return x;
    return y;
}



int main() {
    string primera_par;
    cin >> primera_par;
    
    bool fi_subseq = false;
    int i = 0; //conto la primera paraula ja com a subseq
    int max_long = i;
    
    string par;
    
    while(cin >> par) {
        if (par == primera_par) {
            i = i + 1;
            fi_subseq = true;
            }
        else {
            if (fi_subseq) {
                max_long = max_2(max_long,i);
                i = 0;
                fi_subseq = false;
            }
        }

    }
    if (max_long > 1)   cout << max_long << endl; 
    else                cout << 1 << endl;
}
