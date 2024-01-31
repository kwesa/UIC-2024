#include "NameChanger.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    NameChanger n;
    string nameLastFirst, last, first;
    int commaIndex;

    cout << "Enter your Last, First name: ";
    getline(cin, nameLastFirst);
    commaIndex = nameLastFirst.find(",");
    last = nameLastFirst.substr(0, commaIndex);
    first = nameLastFirst.substr(commaIndex + 2);
    
    cout << "Your name is: " << first << " " << last << endl;
    cout << "Let's change that... \n\n ";

    cout << "Mixed Letters: " << n.inputName(first, last) << endl;


}