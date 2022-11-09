#include <iostream>
using namespace std;


int number_of_digits(int n) {
    
    //ojo amb el pas particular del 0
    if (n == 0)  return 1;
    
    int i = 0; //contador digits
    while (n != 0) {
        n = n/10;
        i = i + 1;
    }
    
    return i;
}

int main() {
  int n;
  while (cin >> n) cout << number_of_digits(n) << endl;
}
