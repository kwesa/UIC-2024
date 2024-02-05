#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    for(int row = 1; row < 8; row++){
        for(int col = 1; col < 8; col++){
            cout << row * col << " ";
        }
    }
    // This outputs the multiplication table from 1 to 7
    // instead of it being in a box it prints them out one after another
    // 1 2 3 4 5 6 7 2 4 6 8 10 12 14 3 6 9 12 15 18 21 4 8 12 16 20 24 28 5 10 15 20 25 30 35 6 12 18 24 30 36 42 7 14 21 28 35 42 49
     return 0; 
}