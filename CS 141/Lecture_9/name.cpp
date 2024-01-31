#include <iostream> 
#include <string>

using namespace std;

int main()
{
    string nameLastFirst, firstName, lastName;
    int commaIndex;

    cout << "Enter your Last, First name: ";
    getline(cin, nameLastFirst);

    commaIndex = nameLastFirst.find(',');
    firstName = nameLastFirst.substr(commaIndex + 2);
    lastName = nameLastFirst.substr(0, commaIndex);

    cout << "First name: " << firstName << endl;
    cout << "Last name: " << lastName;
    cout << lastName[0] << endl;


    return 0;
}