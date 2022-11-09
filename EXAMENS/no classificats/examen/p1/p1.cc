#include <iostream>
using namespace std;

//pre: 10 >= a >= 0, 10 >= b >= 0
//post: retorna el valor maxim
int max_2(int a,int b) {
    if (a > b)  return a;
    return b;
}

//pre: a >= 0, b >= 0 with the same number of digits
//post: returns the num_max_digits of a and b
int num_max_digits(int a, int b) {
    
    //cas directe
    if (a<10)   return max_2(a,b);
    
    //hipotesis induccio (cas recursiu)
    else {
        cout << max_2(a%10, b%10);
        return num_max_digits(a/10, b/10);
    }
}


int main() {
    int a, b;
    while (cin >> a >> b) {
        cout << num_max_digits(a, b) << endl;
    }
}
