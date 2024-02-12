#include "Function.h"
#include <iostream>
using namespace std;

int main()
{
    Function f;
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << f.circleArea(radius) << endl;
    return 0;
}