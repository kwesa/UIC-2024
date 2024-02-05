#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   double x,y;
   x = 8.0;
   y = 3/5 * x;
   cout << y << endl;
   // This Outputs 0 because 3/5 is an integer division and the result is 0
    return 0; 
}