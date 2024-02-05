#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   int num = 12; 
   if(num < 4){
    cout << "A";
   } else if (num > 8 || num < 10){
    cout << "B";
   } else if (num > 6){
    cout << "C";
   } 
    // This will output B
    // This is because the first condition is false, the second condition is true, and the third condition is false

   return 0;
}