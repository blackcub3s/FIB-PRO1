#include <iostream>
using namespace std;

int max_2(int x, int y) {
    if (x > y)  return x;
    return y;
}


int main() {
    string par_init;
    cin >> par_init;
    
    int max = 1;  //el primer cal acumularlo!
    int conta = 0;
   
    //per fer que pugui tornar 3 si tens hola hola hola en comptes de 2
    bool primer_element = true; 
    
    string par;
    while(cin >> par) {
        if (primer_element){
            conta = 1;
            primer_element = false;
        }
        if (par == par_init) {   
            conta = conta + 1;
            max = max_2(conta,max); //acumulo longitud grup maxim.
        }
        else    conta = 0; //resetejo contador
    }
    cout << max << endl;
    
    
 
}
