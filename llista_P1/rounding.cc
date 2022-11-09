#include <iostream>
using namespace std;

int main(){
    double a;
    int b;
    int x;
    cin >> a;
    x = int(a);
    if ((x+1) - a < a - (x-1)){ //comprova aixo
        x = x + 1;
    cout << x << x+1 << endl;
}
