#include <iostream>
using namespace std;

const int temp_calenta = 30;
const int temp_freda = 10; 
const int temp_bull = 100;
const int temp_solid = 0;
//hauria de definir els strings de "it's hot", "it's cold"
//i "it's ok" com a constants string? 

int main() {
    int temp;
    cin >> temp;
    
    if (temp > temp_calenta) {
        cout << "it's hot" << endl;
        if (temp >= temp_bull) {
            cout << "water would boil" << endl;
        }
    }
    else if (temp < temp_freda) {
        cout << "it's cold" << endl;
        if (temp <= temp_solid) {
            cout << "water would freeze" << endl;
        }
    }
    else {
        cout << "it's ok" << endl;
    }
}
