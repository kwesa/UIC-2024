#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   int value = 13;
   switch(value) {
       case 10: cout << 5 << ' ' << endl; break;
       case 13: cout << 7 ;
       case 11: cout << 15; break;
       case 12: cout << 12;
       default: cout << 0; break;
   }
   // This will output 715 because the case 13 doesn't have a break statement

   return 0;
}