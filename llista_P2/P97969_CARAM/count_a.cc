#include <iostream>
using namespace std;

int main(){
    char car = ' ';
    int sum = 0;
    while (car != '.'){
        cin >> car;
        if (car == 'a') sum = sum + 1;
    }
    cout << sum << endl; // sum es el contador
}
/*
 * NO ES FEIA AIXI TIO VIGILA!  NO FACIS LO SEGUENT. FES HO AMB CHARS
int main(){
    string frase;
    cin >> frase;
    
    int i = 0;
    int contador = 0;
    
    while (frase[i] != '.') {
        if (frase[i] == 'a'){
            contador = contador + 1;
        }
        i = i + 1;
    }
    cout << contador << endl;
}

*/
