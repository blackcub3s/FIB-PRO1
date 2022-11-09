#include <iostream>
using namespace std;

void info_sequence(int& sum, int& last) {
    bool primer = true;
    int postlast = 1;//valor dummie
    while (postlast != 0) {
        cin >> postlast;  
        sum += last;
        last = postlast;
    }
}

int main() {
    
    int last = -1; //es cancelen entre si
    int sum = 1;//es cancelen entre si
    int sum_memo = 0;
    int last_memo = 0;
    int similar = 0;
    while (last != 0) {//recorro files
        info_sequence(sum, last);//trobo suma i ultim valor de fila.
        if (sum_memo == sum and last_memo == last) ++similar;

        sum_memo = sum;
        last_memo = last;
        
    }
    cout << sum + 1 << endl; //sumo 1 per incloure la primera
}
