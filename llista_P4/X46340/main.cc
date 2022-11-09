#include <iostream>
using namespace std;

int max_2(int a, int b) {
    if (a > b)
        return a;
    return b;
}

int min_2(int a, int b) {
    if (a > b)
        return b;
    return a;
}


int sum_min_max(int x,int y,int z) {
    return max_2(max_2(x,y),z) + min_2(min_2(x,y),z);
}


int main() {
  int x,y,z;
  while (cin >> x >> y >> z) cout << sum_min_max(x,y,z) << endl;
}
