#include <iostream>
using namespace std;

int main(){
    //char car = ' ';
    char car;   // ***
    cin >> car; // ***     nota que les linies *** substitueixen la linia anterior (char car = ' ') segonjs els profes. es una altra manera de fer-ho. AIXI HO VOLEN A L'ASSIGNATURA
    int sum = 0;
    while (car != '.'){
        if (car == 'a') sum = sum + 1;
        cin >> car;
        //if (car == 'a') sum = sum + 1; ARA POSO L IF ABANSSSS DEL CIN PER REOCLLIR EL JUDICI DEL PRIMER CAR.
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
