#include <iostream>
#include <cmath>
using namespace std;

bool is_perfect(int x) {
    int sum = 0; //ja incloc l'1
    int i = 1; //avalua divisors (1 el salto perque ja se que es divisor)
    while (i < x){ 
        if (x%i == 0)
            sum = sum + i;
        i = i + 1;
    }
    if (sum == x and x != 0)
        return true;
    return false;
}

int main () {
  int x;
  while (cin >> x) cout << (is_perfect(x) ? "true" : "false") << endl;
}
