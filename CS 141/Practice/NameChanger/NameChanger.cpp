#include "NameChanger.h"
#include <iostream>
#include <string> 
#include <cstdlib>
#include <sstream>
using namespace std;

std::string NameChanger::inputName(std::string first, std::string last)
{
    char first[sizeof(first)], last[sizeof(last)];
    int min1= 0, max1= sizeof(first), min2= 0, max2= sizeof(last), random1, random2;
    srand(time(0));
    random1 = rand() % (max1 - min1 + 1) + min1;
    random2 = rand() % (max2 - min2 + 1) + min2;
    for(int i = 0; i < sizeof(first); i++)
    {
        if(i == random1)
        {
            first[i] = last[random2];
        }
        else
        {
            first[i] = first[i];
        }
    }
    stringstream ss;
    ss << first << " " << last;
    string newName = ss.str();

    return newName;

}
