#include <iostream>
using namespace std;

int main() {
    //n calers estalviats fins ara. || a1, a2, a3... les pagues setmanals dels dilluns || d gast fix
    int d, n, nre_setmanes_amb_paga;
    cin >> d >> n >> nre_setmanes_amb_paga;
    
    int i = 0;
    int pos = 0; //conteig de dies positius
    while (i < nre_setmanes_amb_paga) { //nre_setmanes coincideix, en aquest punt, amb la resta d'elements de la seq a llegir :) no cal posar cin dins el while.
        int a;
        cin >> a;
        n = n - d + a; //calers = calers inicials - despesa semanal + paga semanal
        if (n > 0)  pos = pos + 1;
        i = i + 1;
    }
    cout << pos << endl;
}
