#include "Array.h"
#include <iostream>
using namespace std;

int main()
{
    Array a;
    char array[3][3];
    a.makeTicTacToe(array);
    a.printArray(array);

    return 0;
}