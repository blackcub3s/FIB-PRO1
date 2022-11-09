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




bool is_valid_date(int d, int m, int a) {
    if ((a >= 1800) and (a <= 9999)) {
        if ((m >= 1) and (m <= 12)) {
            if (d >= 1){//comprovo dies positius
                if ((m == 4) or (m == 6) or (m == 9) or (m == 11)) {//ms 30d
                    if (d <= 30) 
                        return true;
                }
                else if (m == 2) {
                    if (is_leap_year(a)) {
                        if (d <= 29)
                            return true;
                    }
                    if (d <= 28)//cas no leap year
                        return true;
                }
                else {
                    if (d <= 31)
                        return true;
                }
            }
        }
    }
    return false;
}





int main() {
  int d, m, a;
  while (cin >> d >> m >> a)
    cout << (is_valid_date(d, m, a) ? "true" : "false") << endl;
}
