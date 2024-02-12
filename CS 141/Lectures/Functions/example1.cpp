#include <iostream>
#include <string>
using namespace std;

//void addOne(int &a){
   // a++;
//}
void addOne(string &a) {
    a.push_back('1');
}
int main(){
    string a = "3"; 
    //addOne(a);
    cout << &a << endl;
    
    return 0;
}