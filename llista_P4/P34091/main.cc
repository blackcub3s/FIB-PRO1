#include <iostream>
#include <cmath>
using namespace std;

//bib https://stackoverflow.com/questions/26753839/efficiently-getting-all-divisors-of-a-given-number

//SI vols trobar els divisors de un nombre x (suposa x = 24) tens els seguents divisors.
// 1 2 3 4 6 8 12 24

//nota que estan aparellats. 1 va amb 24, 2 va amb 12, 3 va amb 8 i 4 va amb 6. QUan diem que va vol dir 
// que fas 24/1 = 24, 24/2 = 12, 24/3 = 8, etc. I s'acaba quan x/i <= int(sqrt(x))


bool is_perfect(int x) {
    int sum = 0; //ja incloc l'1
    int i = 1; //avalua divisors (1 el salto perque ja se que es divisor)
    int arrel_x = int(sqrt(x));
    
    if (x == 1) return false;
    
    while (i <= arrel_x){ //COMPLEXITAT BONA! :)
        if (x%i == 0)
            sum = sum + (i + x/i);
        i = i + 1;
    }
    // cout << endl << sum - x <<endl;
    if ((sum - x) == x and (x != 0))
        return true;
    return false;
}

int main () {
  int x;
  while (cin >> x) cout << (is_perfect(x) ? "true" : "false") << endl;
}
