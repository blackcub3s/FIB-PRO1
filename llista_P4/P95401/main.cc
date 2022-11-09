#include <iostream>
using namespace std;

bool is_leap_year(int year) {
    
    if (year%100 != 0){//no acaba en dos zeros
        if (year%4 == 0)
            return true;  
        return false;
    }
    
    else {
        year = year / 100; //elimino els dos zeros
        if (year%4 == 0)     
            return true;
        return false;
    }
    
    cout << endl;
}




int main() {
    int a;
    while (cin >> a) cout << (is_leap_year(a) ? "true" : "false") << endl;
}
