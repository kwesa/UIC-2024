#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   int score = 102;
   while(score > 90){
   cout << (score > 100 ? 100 : score) << " ";
    score -= 5;
    }
    // How this works is that the while loop will keep running as long as the score is greater then 90.
    // the ? operator is a conditional operator that will check if the score is greater then 100, if it is then it will print 100, if not then it will print the score. 
    return 0; 
}