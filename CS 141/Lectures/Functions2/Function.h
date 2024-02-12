#ifndef FUNCTION_H
#define FUNCTION_H
#define PI 3.14159
#endif 
#include <iostream>
#include <cmath> 

class Function
{
private:

public:
    double circleArea(double radius){
        return PI * pow(radius, 2);
    }
    double squareAreaCircle();
    
};