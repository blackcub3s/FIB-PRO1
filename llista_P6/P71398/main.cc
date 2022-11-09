#include <iostream>
using namespace std;


void digit_maxim_i_minim(int n, int& maxim, int& minim) {
    

    int aux = n%10;
    n = n/10;
    maxim = aux;
    minim = aux;
    
    if (n != 0)     digit_maxim_i_minim(n, maxim, minim);

    if (aux > maxim)      maxim = aux;
    else if (aux < minim) minim = aux;

}


int main() {
    int x;
    while (cin >> x) {
      int a, b;
      digit_maxim_i_minim(x, a, b); 
      cout << x << ' ' << a << ' ' << b << endl;
    }
}

//com tracto el inicials de valors no inicialitzts sense canvis al main ni sapsalera funcio (es dir no afegint un boolea per a inicialitzar a i b (maxim i minim respectivament ,dins la funcio digitmaximiminim)

