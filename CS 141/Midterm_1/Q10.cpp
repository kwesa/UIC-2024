#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   string word3;
   word3 = "A short string";
   cout << word3.replace(word3.find("short"), 5, "long") << endl;

    // how .find works is it returns the index of the first character of the substring
    // you need to give .find the exact substring you want to find and the length of the substring
   return 0;
}