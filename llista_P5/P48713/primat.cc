#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int num) {
    //funcio que retorna true si num es primer. False en cas contrari.
    
    //cas particular que cal definir
    if (num == 1)   return false;
    
    int fi_comprovacio = int(sqrt(num));
    
    //CAL COMENSAR DE 2 TIO! O SINO LA CAGUES!
    for (int i = 2; i <= fi_comprovacio; ++i) {
        //nota que i és candidat a divisor. I que num/i es el seu candidat a divisor APARELLAT:
        
        if (num%i == 0 or num%(num/i) == 0) {//comprovo els dos divisors aparellats alhora! 
            return false; //no ens deixen usar break... però el return fa de break ejejejejejjej
        }
    }
    return true;
}


int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x; //nombre a comprovar
        
        if (is_prime(x))  cout << x << " is prime" << endl;
        else              cout << x << " is not prime" << endl;
        
    }
}
