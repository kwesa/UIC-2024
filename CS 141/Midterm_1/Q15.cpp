#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int sum = 0;
    for(int i = 0; i < 7; i++){
        sum += i;
    }
    cout << sum << endl;
    return 0; 
}