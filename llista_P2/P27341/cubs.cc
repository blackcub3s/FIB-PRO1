#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    while (cin >> a >> b) { //aixo fa que busqui fins al final dels nombres de la sequencia! Si en troba es true!
        
        int sum = 0;
        int i = a;
        
        while (i <= b) {
            sum = sum + i*i*i;
            i = i + 1; //per que dona diferent si faig +=? no itera l'ultim... dif pre i postincrements?
        }
        
        cout << "suma dels cubs entre " << a << " i " << b << ": " << sum << endl;
    }
}
