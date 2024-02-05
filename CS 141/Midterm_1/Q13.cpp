#include <iostream>
#include <iomanip>

using namespace std;

int main(){
 for(int i = 1; i < 8; i++){
     if(i % 4 ==0){
     continue;
     }
     cout << i;
 }
    // The way the code is written it will output 1234567
    // This happens because the % opperator is checking for a number divisible by 4
    // If it is divisible by 4 it will continue to the next iteration
   return 0;
}