#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matriu;

void min_max(const Matriu& mat, int& minim, int& maxim) {
    int f = mat.size();
    int c = mat[0].size();
    bool primer = true;
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            if (primer) {
                minim = mat[i][j];
                maxim = mat[i][j];
                primer = false;
            }
            else {
                if (mat[i][j] > maxim)  maxim = mat[i][j];
                if (mat[i][j] < minim)  minim = mat[i][j];
            }        
        }
    }
}

int main() {


    int f, c;
    vector<int> v;

    while (cin >> f >> c) {
        
        Matriu m(f, vector<int>(c));
        
        for (int i = 0; i < f; ++i) {
            for (int j = 0; j < c; ++j) {
                cin >> m[i][j];
            }
        }
        
        int minim = 0;
        int maxim = 0;
        min_max(m, minim, maxim);
        int diff = maxim - minim;
        v.push_back(diff);
    }

    int n = v.size();
    int v_max = 0;
    int i_store = 0;
    bool primer = true;
    int i = 0;
    while (i < n) {
        if (primer) {
            v_max = v[i];
            i_store = i;
            primer = false;
        }
        else {
            if (v[i] > v_max) {
                v_max = v[i];
                i_store = i;
            }
        }
        ++i;
    }
    cout << "la diferencia maxima es " << v_max << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << i_store + 1 << endl;
}   
