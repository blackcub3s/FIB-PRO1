#include <iostream>
#include <vector>
using namespace std;


vector<int> concatenation(const vector<int>& V1, const vector<int>& V2) {
    int long_v1 = V1.size();
    int long_v2 = V2.size();
    
    vector<int> V3(long_v1 + long_v2);
    
    for (int i = 0; i < long_v1; ++i)         V3[i] = V1[i];
    for (int i = 0; i < long_v2; ++i)         V3[i + long_v1] = V2[i]; 
    
    return V3;
}


int main() {
  int n1;
  while (cin >> n1) {
    vector<int> V1(n1);
    for (int i = 0; i < n1; ++i) cin >> V1[i];
    int n2;
    cin >> n2;
    vector<int> V2(n2);
    for (int i = 0; i < n2; ++i) cin >> V2[i];
    vector<int> res = concatenation(V1, V2);
    cout << res.size() << endl;
    for (int i = 0; i < (int)res.size(); ++i) cout << " " << res[i];
    cout << endl;
  }
}
