#include <iostream>
using namespace std;


void revertir(bool& inicialitza_contador, int& i, int& j) {
    string par;
    if (cin >> par) {
        ++i;
        revertir(inicialitza_contador, i, j);
    }
    
    //l'interior de l'if només s'executarà just quan acabi el procediment recursiu
    // de l'anterior if (quan la llista de paraules acabi).
    if (inicialitza_contador) {
        // si la llista te nombre imparell d'elements, 2a meitat de la llista t un
        // element més que la primera meitat demanada. Cal vigilar amb la paritat!
        if (i % 2 != 0)   j = i/2 + 1; 
        else              j = i/2;
    }
    
    if (j >= 0) {//recorro SEGONA meitat llista
        inicialitza_contador = false;
        --j;
    }
    else    cout << par << endl;
  
}

int main() {
    //declaro i inicialitzo les variables necessaries que faran de parametres
    //d'entrada/sortida a la funcio revertir, que es cridarà
    // recursivament a sí mateixa (nota, j no cal inicialitzar-la encara).
    bool inicialitza_contador = true;
    int i = 0;
    int j;
    
    revertir(inicialitza_contador, i, j);
}
