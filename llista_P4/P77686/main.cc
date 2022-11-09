#include <iostream>
using namespace std;

int eleva_10(int n) {
    //funcio que retorna el 10 elevat tants cops com diu
    //l'unic argument de la funcio. Exemple: n es 3. retorna 1000.
    int nombre = 10;
    for (int i = 1; i < n; ++i) {
        nombre = nombre*10;
    }
    return nombre;
}

int number_of_digits(int n) {
    int i = 0; //contador digits
    while (n != 0) {
        n = n/10;
        i = i + 1;
    }
    return i;
}

bool is_palindromic(int n) {
    
    //miro el nombre de números que hi ha en l'enter n.
    int nre_digits = number_of_digits(n);
    
    int i = 1;
    int j = 1;
    while ((i <= nre_digits/2)) {
        //per trocejar per l'esquerra necessito generar
        //una unitat seguida de zeros adient:
        int trocejador_esq = eleva_10(nre_digits - j);
        
        //trocejo per la dreta i per l'esquerra:
        int digit_dr = n%10;
        int digit_esq = n/trocejador_esq;
        
        
        //avaluo si no es cumpleix la condició de palindromabilitat xD
        if (digit_dr != digit_esq)
            return false;
        
        //elimino nre mes a l'esquerra i despres el de la dreta
        n = n%trocejador_esq; 
        //cout << n << endl;
        n = n/10;
        //cout << n << endl;
        
        //incremento indexos
        i = i + 1;
        //j usada per a descomptar la reduccio de 
        // tamany d'n a cada iteracio. util per paraula esq
        j = j + 2; 
    }
    return true; //si arriba fins aqui es que es palindrom

}


int main() {
    int n;
    while (cin >> n) cout << (is_palindromic(n) ? "true" : "false") << endl;
}
