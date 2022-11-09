#include <iostream>
#include <vector>
using namespace std;

bool find_element(const vector<double>& v, double x, double &e) {
    int longitud = v.size();
    //miro primer nombre que te menys de 0 (comensant pel final)
    double half_average = x/2;
    double twice_average = x*2;
    for (int i = 0; i < longitud; ++i) {
        double el = v[longitud-1-i];
        if (el <= half_average or el >= twice_average) {
            e = el;
            return true;
        }
    } 
    return false;
}


int main() {
   cout.setf(ios::fixed); 
   cout.precision(2);
   int n;
   cin >> n;
   vector<double> v(n);

   double mean = 0;
   int i = 0;
   double x;
   while (i <= n-1) {
       cin >> x;
       mean = mean + x;
       v[i] = x;
       i = i + 1;
   }
   mean = mean/i; //noteu que i conte aqui nombre eleemtns
   double elem;
   bool found = find_element(v,mean,elem);
   if (found) cout << elem << endl;
   else cout << "not found" << endl;
}
