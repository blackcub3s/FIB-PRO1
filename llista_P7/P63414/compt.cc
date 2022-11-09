#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);    //vector original que contindra tots els nombres
    
    vector<int> v_cont(1,1); //vector que conte les ocurrencies per nombre.
    vector<int> v_unics(1); //vector que conte els nombres (en ordre correlatiu al conteig definit per v_cont)
    
    //relleno el vector de nombres
    for (int i = 0; i < n; ++i)     cin >> v[i];
    
    //ordeno vector v_nom:
    sort(v.begin(), v.end());
    
    //conto occurencies i les guardo
    v_unics[0] = v[0];
    for (int i = 0; i < n; ++i) {
        if (v[i] == v[i + 1]) {
            v_cont[i]
        }
    }
  
    }
}
