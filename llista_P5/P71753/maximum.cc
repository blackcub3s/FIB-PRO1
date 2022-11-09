#include <iostream>
using namespace std;

int max_2(int x, int y) {
    if (x > y)  return x;
    return y;
}

int maxim_sequencia(int longitud_seq) {
    int i = 1;
    bool primer_element = true;
    int max = 0; //per culpa del jutge he d'inicialitzar quan no cal
    while (i <= longitud_seq) { //ja que n'agafo dos a cada iteracio
        int b;
        cin >> b;
        //fem algo dummie per al primer element
        if (primer_element) {
            primer_element = false;
            max = b; 
        }
        
        max = max_2(max,b);
        i = i + 1;
    } 
    return max;
}


int main() {
    int nre;
    while (cin >> nre)
        cout << maxim_sequencia(nre) << endl;
}
