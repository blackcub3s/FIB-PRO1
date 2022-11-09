#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int LONG_ALFABET = 'z' - 'a' + 1; 

char lletra_mes_frequent(const string& s) {
    //abdddcccee imprimira c
    //conte totes les lletres de labecedari
    vector<int> w_conteig(LONG_ALFABET,0); 
    int n = s.length();
    
    //                                                      a b c d
    //afegeixo el conteig al vector w_conteig de l'alfabet (0,1,0,3...)
    for (int i = 0; i < n; ++i) {
        ++w_conteig[int(s[i]) - int('a')];
    }
    
    //recorro vector w_conteig per a trobar el valor maxim.
    int nre_maxim = 0;
    int index_nre_maxim = 0;
    for (int i = 0; i < LONG_ALFABET; ++i) {
        //CAL POSAR SUPERIOR ESTRICTE NECESSARIAMENT. AIXI
        //RETORNARA EL PRIMER VALOR MAXIM -COM QUE EL VECTOR
        //ES ORDENAT LEXICOGRAFICAMENT TORNA LA LLETRA mes lletra_mes_frequent
        //FUNS I TOT EN CAS D'EMPAT
        if (w_conteig[i] > nre_maxim) { 
            nre_maxim = w_conteig[i];
            index_nre_maxim = i;
        }
    }
    return char(int('a') + index_nre_maxim);
}



int main() {
    cout.setf(ios::fixed);
    cout.precision(2); 
    
    int n;
    cin >> n;
    
    vector<string> v(n); //conte paraules emmagatzemades
    vector<int> w(n);    //conte longitud de les paraules emmagatzemades
    double mitjana = 0;

    //relleno vector d'strings v i alhora el vector w (tambe faig mitjana)
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        w[i] = v[i].length(); //longitud de la paraula
        mitjana = mitjana + w[i];
    }
 
    mitjana = mitjana/n;
    cout << mitjana << endl;
    for (int i = 0; i < n; ++i) {
        if (w[i] >= mitjana) {
            cout << v[i] << ": " << lletra_mes_frequent(v[i]) << endl; 
        }
    } 
}
