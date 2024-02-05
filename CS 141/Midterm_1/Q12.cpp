#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
string greeting = "hello";
cout << greeting.at(8) << endl;
cout << greeting[8] << endl;
   return 0;
   // greeting.at(8) will throw an exception
}