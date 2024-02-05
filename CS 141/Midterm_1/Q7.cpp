#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int newVar;
    for(newVar = 6;newVar; newVar--){
        cout << newVar << " ";
    }
    // This will output 6 5 4 3 2 1
    // This is because the for loop will run until newVar is 0
   return 0;
}