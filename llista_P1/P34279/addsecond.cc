#include <iostream>
using namespace std;

void formateja_seguent_cout(){    
    cout.fill('0');
    cout.width(2);
}


void imprimeix_formatejat(int h, int m, int s){
    formateja_seguent_cout();
    cout << h << ':';
   
    formateja_seguent_cout();
    cout << m << ':'; 
   
    formateja_seguent_cout();
    cout <<  s << endl;
}

int main() {
    int h, m, s; //anys, dies, hores, minuts i segons, respectivament.
    cin >> h >> m >> s;
    
    if (s < 59)     imprimeix_formatejat(h, m, s + 1);
    else {
        if (m < 59) imprimeix_formatejat(h, m + 1, 0);
        else {
            if (h < 23)     imprimeix_formatejat(h + 1, 0, 0);//cas hh.59.59 al que li sumo 1
            else            imprimeix_formatejat(0, 0, 0);    //cas 23.59.59
        }
    }
}
