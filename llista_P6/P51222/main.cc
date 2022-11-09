#include <iostream>
using namespace std;


int number_of_digits(int n) {
    int contador = 1;

    if (n >= 0 and n <= 9)     return contador;
    if (n > 1) {
        n = n/10;
        contador = number_of_digits(n) + 1;
    }
    return contador;
}

int main () {
  int n;
  while (cin >> n) cout << number_of_digits(n) << endl;
}
