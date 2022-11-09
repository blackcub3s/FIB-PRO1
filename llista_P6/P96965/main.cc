#include <iostream>
using namespace std;

//nomes he aconseguit que em faci la suma un cop. com seguir fent sumes de les sumes?
int reduction_of_digits(int n) {
    int sum = 0;
    if (n != 0) {
        int aux = n%10;
        n = n/10;
        sum = reduction_of_digits(n) + aux;
    }
    return sum;
}



int main() {
  int n;
  while (cin >> n) {
    cout << reduction_of_digits(n) << endl;
  }
}
