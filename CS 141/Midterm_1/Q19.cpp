#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i = 2;
    int sum = 0;
    do{
        sum = sum + i;
    }while(i > 5);
    cout << sum; 
    // This outputs 2, because the do while loop runs once
    return 0; 
}