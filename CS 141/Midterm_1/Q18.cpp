#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int count = 0;
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            count++;
            }
        }
        cout << count << endl;
        /*This outputs 8, because the outer loop goes 4 times
        and the inner loop goes 2 times 4 * 2 = 8 two dimensional
        loops create a rectangle*/
        return 0; 
}