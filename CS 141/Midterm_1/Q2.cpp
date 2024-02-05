#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   int val = 0;
   int count = 0;
   while (val < 10){
    if((count <= 6) && (val >= 5)){
        // this will print "hello" 2 times
        cout << "hello" << endl;
    }
    count++; 
    val++;
   }

    return 0; 
}