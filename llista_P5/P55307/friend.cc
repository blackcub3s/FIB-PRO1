#include <iostream>
#include <cmath>
using namespace std;

int sum_div(int x) {
    int sum = 1; //ja incloc l'1
    int i = 2;  //avalua divisors (salto 1 perque no vull trobar el propi nombre x/i)
    int arrel_x = int(sqrt(x));
    
    while (i <= arrel_x) { //COMPLEXITAT BONA! :)
        if (x%i == 0) {
            sum = sum + (i + x/i);
        }
        i = i + 1;
    }
    return sum;
}

void imprimir_formatejat(int a, int b) {
    cout << '(' << a << ' ' << b << ')';
}

int main() {
    int a, b;
    bool primera_iter = true;
    while(cin >> a >> b) {
        int sum_a = sum_div(a);
        int sum_b = sum_div(b);
        if (a != b and (sum_a == b and sum_b == a)) {
            
            if (primera_iter) {
                imprimir_formatejat(a,b);
                primera_iter = false;
            }
            else {
                cout << ',';
                imprimir_formatejat(a,b);
            }
            
        }
    }
    cout << endl;
}





