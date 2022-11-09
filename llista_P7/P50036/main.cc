#include <iostream>
#include <vector>
using namespace std;



//p=⟨3,2,5,−1⟩ representa p(x)=3+2x+5x^2 −x^3, un polinomi de grau n=3.
int avalua(const vector<int>& P, int x) {
    
    //miro com de gran es el vector de coeficients
    int long_vector = P.size();
    
    //si nomes hi ha el terme independent:
    if (long_vector == 1)     return P[0];
    
    //cas que polinomi te 2 o mes monomis exemple minim <1 3> 1 + 3x
    int i = long_vector - 1;
    int finestra = P[i-1] + P[i]*x;
    while (i > 1) {
        i = i - 1;
        finestra = P[i-1] + x*finestra; 
    }
    
    return finestra;
}


int main() {
    int n;
    while (cin >> n) {
        vector<int> P(n);
        for (int i=0; i<n; ++i) cin >> P[i];
        int x;  cin >> x;
        cout << avalua(P,x) << endl;
    }
}
