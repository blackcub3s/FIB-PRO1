#include <iostream>
#include <vector>
using namespace std;


void imprimeix_vector(const vector<int>& w, int m) {
    cout << m << ": ";
    for (int i = 0; i < m - 1; ++i) {
        cout << w[i] << ' ';
    }
    cout << w[m - 1] << endl;
}

//pre: vector amb els cims. m es la longitud del vector, que ja la tenim.
void imprimeix_cims_mes_alts_que_lultim(const vector<int>& w, int m) {
    int ultim = w[m - 1];
    bool trobat = false;
    for (int i = 0; i < m - 2; ++i) {
        if (w[i] > ultim) {
            cout << w[i] << ' ';
            trobat = true;
        }
    }
    if (trobat) cout << w[m - 2] << endl;
    if (not trobat) cout << '-' << endl;
}


vector<int> obtain_peaks(const vector<int>& v) {
    int n = v.size(); //tamany del vector
    vector<int> w; //mida no la sabem (contindra els cims)
    for (int i = 0; i < n - 2; ++i) {
        int cim_candidat = v[i + 1];
        if ((v[i] < cim_candidat) and (cim_candidat > v[i + 2])) {
            w.push_back(cim_candidat);
        }
    }
    return w;
}


int main() {

    int n;
    cin >> n;
    
    //introdueixo al vector els valors
    vector<int> v(n);
    int i = 0;
    while (i < n) {
        cin >> v[i];
        ++i;
    }
    
    
    //w conte el vector amb els cims
    vector<int> w = obtain_peaks(v);
    int m = w.size();
    
    
    //imprimeixo el nombre de cims trobats i les seves altures
    if (m > 0) {
        imprimeix_vector(w,m);
        //imprimeixo el nombre de cims que son mes grans que l'ultim
        imprimeix_cims_mes_alts_que_lultim(w,m);
    }
    else {
        cout << "0:" << endl;
        cout << '-' << endl;
    }
    

}
