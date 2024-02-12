#include "Array.h"
#include <iostream>
using namespace std;

char Array::makeTicTacToe(char (*array)[3])
{
  int i, j;
  for (i = 0; i < 3; i++)
  {
      array[i][0] = '-';
    for (j = 0; j < 3; j++)
    {
      array[i][j] = '|';
    }
  }
  return array[3][3];
}
void Array::printArray(char (*array)[3])
{

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << array[i][j];
    }
    cout << endl;
  }
}
