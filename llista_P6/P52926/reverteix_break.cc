#include <iostream>
using namespace std;


//pre: par pren un valor buit per a la primera iteracio que ve del main.
//post: par pren el valor de la seguent paraula de la sequencia.

//explicacio: la funcio reverteix va introduint paraules pel cin de forma recursiva FINS
//que troba la marca final end (el que passa al primer if). A partir d'aqui deixa d'introduir paraules pel 
//canal d'entrada i comensa a treure-les, en ordre revertit, pel de sortida (segon if)

void reverteix(string par) {
    if (par != "end") {
        cin >> par;
        reverteix(par);
    }
    //quan deixa de fer recursio, imprimiria end, i no ho volem.
    if (par != "end")   cout << par << endl;
}


int main() {
    string par = " ";
    reverteix(par);
}
