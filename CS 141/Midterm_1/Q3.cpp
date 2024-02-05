#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int x = 5;
    if(x = 4){
    
        cout << "x is 4" << endl;
    }
    else{
        cout << "x is not 4" << endl;
    }
    // this will print "x is 4" because we're using the 
    // assignment operator instead of the comparison operator
    return 0; 
}