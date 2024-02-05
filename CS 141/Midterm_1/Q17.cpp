#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string word6 = "Data Input";
    char aChar = word6[5]-1;
    char bChar = tolower(word6.at(5));
    
    cout << aChar << bChar << endl;
    /* This outputs "Hi" because it takes the 5th character of the string "Data Input" 
    then subtracts 1 from the ASCII value of the character and then outputs the lowercase
    Then it looks at the 5th character of the string "Data Input" and outputs the lowercase
    */
    return 0; 
}