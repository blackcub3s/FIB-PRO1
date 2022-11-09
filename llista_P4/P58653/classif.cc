#include <iostream>
using namespace std;

void print_line(char c, string s, bool b) {
         cout << s << "('" << c << "') = ";
         if (b) cout << "true" << endl;
         else cout << "false" << endl;
     }
     
int main() {
    char c;
    cin >> c;
   
    bool es_lletra = false;
    bool es_minuscula = false;
    bool es_majuscula = false;   
    
    if ((int('a') <= int(c)) and (int(c) <= int('z'))) {
        es_lletra = true;
        es_minuscula = true;
    }
    else if ((int('A') <= int(c)) and (int(c) <= int('Z'))) {
        es_lletra = true;
        es_majuscula = true;
    }
    
    bool es_vocal = false;
    bool es_consonant = false;
    bool es_digit = false;
    
    if (es_lletra) {
        if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c =='u') {
            es_vocal = true;
            es_minuscula = true;
        }
        else if (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c =='U') {
            es_vocal = true;
            es_majuscula = true;
        }
        else {
            es_consonant = true;
        }
    }
    else if (int('0') <= int(c) and int(c) <= int('9')) {
        es_digit = true;
    }
    
    print_line(c, "letter", es_lletra);
    print_line(c, "vowel", es_vocal);
    print_line(c, "consonant", es_consonant);
    print_line(c, "uppercase", es_majuscula);
    print_line(c, "lowercase", es_minuscula);
    print_line(c, "digit", es_digit);
    
}
