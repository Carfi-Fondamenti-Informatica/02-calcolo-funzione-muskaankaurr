#include <iostream>
using namespace std;

int main() {
   float a=0, b=0, x=0, y=0, z=0;
   cin >> a >> b >> x >> y;
   if (x < 0 && y > 0) {
      cout << (z = (a * x) - (b * y)) << endl;
   } else if (x>=0 && y<=0) {
      cout << (z = (a * (x * x)) - b * y) << endl;
   } else {
      cout << (z = (a * x) + (b * (y * y))) << endl;
   }
  
   return 0;
}
