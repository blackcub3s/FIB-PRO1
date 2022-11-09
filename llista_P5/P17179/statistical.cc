#include <iostream>
using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    
    
    int files;
    cin >> files;
    
    for (int i = 1; i <= files; ++i) {
        
        int columnes;
        cin >> columnes;
        
        bool primer = true;
        double average = 0;
        double min;
        double max;
        
        // usem while per poder guardar l'index de la columna
        // fora de l'scope del loop. amb for no podem
        int j = 1;
        while (j <= columnes) {
            double n;
            cin >> n;

            if (primer) {//nomes hi entra a la primera iteracio
                min = n;
                max = n;
                primer = false;
            }
            else {
                if (min > n)    min = n;
                if (max < n)    max = n;
            }
            
            average = average + n;
            j = j + 1;
        }
        
        //els molts fills de puta fan denominador amb graus de llibertat...
        //m'ha costat veure la seva POLLADA.
        cout << min << ' ' << max << ' ' << average/(j-1) << endl; 
    }
    
}
