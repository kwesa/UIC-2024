#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int i = 1;
    int sum = 0;
        while(i < 7){
            sum += i;
            if(sum > 11){
                break;
            }
        }
    return 0; 
}