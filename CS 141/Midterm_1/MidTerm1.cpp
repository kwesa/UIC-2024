#include <iostream>
using namespace std;
int main()
{
int maxNumber;
int num;
cout << "Enter maximum number: ";
cin >> maxNumber;

cout << "Enter numbers: ";

while (cin >> num && num >= 0) {
    if (num > maxNumber) {
        cout << maxNumber << endl;
    } else {
        cout << num << endl;
    }
}
return 0;
}