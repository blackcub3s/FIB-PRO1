#include <iostream>
using namespace std;

int main() {
    int s;
    cin >> s;
    
    int residu_s = s%3600;
    int h = s/3600;
    int m = residu_s/60;
    s = residu_s%60;
    cout << h << ' ' << m << ' ' << s << endl;
}
