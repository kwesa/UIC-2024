#include "SphereCircle.h"
#include <cmath>
using namespace std;

double SphereCirlce::findArea(double radius)
{
    double area;

    area = PI * pow(radius, 2.0);

    return area;
}
double SphereCirlce::findVolume(double radius)
{
    double volume; 

    volume = (4.0/3.0) * PI * pow(radius,3.0);

    return volume; 
}