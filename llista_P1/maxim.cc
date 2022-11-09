#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if (a > b){
        if (a > c){
            cout << a;
        }
        else{
            cout << c;
        }
    }
    else{ //cas b superior a a
        if (b > c){
            cout << b;
        }
        else{ //cas c superior a b
            cout << c;
        }
    }
    cout << endl;
}
