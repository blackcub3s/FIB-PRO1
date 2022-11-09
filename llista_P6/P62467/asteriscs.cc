#include <iostream>
using namespace std;


void imprimeix_asteriscs(int n) {
    if (n == 1)     cout << '*' << endl;
    
    else if (n == 2) {
        cout << "**" << endl;
        imprimeix_asteriscs(n-1);
        cout << '*' << endl;
    }
    else {
        imprimeix_asteriscs(n-1);
    }
}

int main() {
    int n;
    cin >> n;
    imprimeix_asteriscs(n);
}
