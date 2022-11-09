#include <iostream>
using namespace std;

void top_bottom(int n, char c) {
    int fi_blanc = n/2;
    for (int i = 1; i <= fi_blanc; ++i) {
        //imp blancs
        for (int j = 1; j <= fi_blanc; ++j)
            cout << ' ';
        //imp caracter
        cout << c;
        
        //salt linia
        cout << endl;
    }    
}

void mig(int n, char c) {
    //imprimeix els caracters del mig
    for (int i = 1; i <= n; ++i)
        cout << c;
    cout << endl;
}


void cross(int n, char c) {
    top_bottom(n, c); 
    mig(n,c);
    top_bottom(n, c);
}
    

int main() {
  int n;
  char c;
  while (cin >> n >> c) cross(n, c);
}
