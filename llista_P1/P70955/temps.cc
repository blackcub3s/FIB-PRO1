#include <iostream>
using namespace std;

int main() {
    int a, d, h, m, s; //anys, dies, hores, minuts i segons, respectivament.
    cin >> a >> d >> h >> m >> s;
    cout << a*365*24*3600 + d*86400 + h*3600 + m*60 + s << endl;
}
