//
//  main.cpp
//     CS 141 Lab 4: Multiplication Table starter code.
//     Complete the code to display all or part of a multiplication table.
//

#include <iostream>
#include <iomanip>    // for setw()
using namespace std;


/* ------------------------------------------------------------
   Use a loop to display the numbers 1..10
   Sample output:
        Lab 4: Using loops
           1. Show single row
           2. Show multiplication table
           3. Show a subset of a multiplication table
           4. Exit the program.
        Your choice (1-4) --> 1

        Enter the limit for the line of numbers: 8
        Single line:
        1 2 3 4 5 6 7 8
        Done.
 */
void singleLine( int limit)
{
    cout << "Single line:" << endl;
   
   // Your code goes here
   // ...
   
} //end singleLine()


/* ------------------------------------------------------------
   Use a loop within a loop to display a multiplication table
   Sample output:
        Lab 4: Using loops
           1. Show single row
           2. Show multiplication table
           3. Show a subset of a multiplication table
           4. Exit the program.
        Your choice (1-4) --> 2

        Multiplication Table:
           1   2   3   4   5   6   7   8   9  10
           2   4   6   8  10  12  14  16  18  20
           3   6   9  12  15  18  21  24  27  30
           4   8  12  16  20  24  28  32  36  40
           5  10  15  20  25  30  35  40  45  50
           6  12  18  24  30  36  42  48  54  60
           7  14  21  28  35  42  49  56  63  70
           8  16  24  32  40  48  56  64  72  80
           9  18  27  36  45  54  63  72  81  90
          10  20  30  40  50  60  70  80  90 100
        Done.
 */
void allRowsAndColumns(int size)
{
    cout << "Multiplication Table:" << endl;

    // Your code goes here, with a loop for the rows, and inside of that
    // a loop for the columns within that row.
    // ...
    
} //end allRowsAndColumns()


/* ------------------------------------------------------------
   Use a loop within a loop to display a subset from a
   multiplication table, showing only some rows and columns.
   Sample output:
        Lab 4: Using loops
           1. Show single row
           2. Show multiplication table
           3. Show a subset of a multiplication table
           4. Exit the program.
        Your choice (1-4) --> 3

        Enter the row start and limit, and the col start and limit: 2 4 5 8
        Multiplication Table for rows 2 to 4 and columns 5 to 8
          10  12  14  16
          15  18  21  24
          20  24  28  32
        Done.
 */
 void selectRowsAndColumns(int rowStart, int rowLimit, int colStart, int colLimit)
{
    cout << "Multiplication Table for "
         << "rows " << rowStart << " to " << rowLimit << " and "
         << "columns " << colStart << " to " << colLimit
         << endl;
    
    // Your code goes here
    // ...

} //end selectRowsAndColumns()


/* ------------------------------------------------------------
    Display menu options and jump to the corresponding code.
 */
int main()
{
    // Declare variables to use in displaying all or part of a table.
    // These variables don't all get used in all the cases below.
    int rowStart, rowLimit, colStart, colLimit, size;
    // Initialize them all to 0
    rowStart=rowLimit=colStart=colLimit=size=0;
    
    // Used to handle the menu option
    char menuChoice = ' ';
    while(menuChoice != '4'){
       cout << " \n"
            << "Lab 4: Using loops                            \n"
            << "   1. Show single row                         \n"
            << "   2. Show multiplication table               \n"
            << "   3. Show a subset of a multiplication table \n"
            << "   4. Exit the program.                       \n"
            << "Your choice (1-4) --> ";
       cin >> menuChoice;
       cout << endl;
       
       // Handle menu choice to exit the program
       if( menuChoice == '4') {
           cout << "Exiting"
                << endl;
       }
       else if( menuChoice == '1') {
           // Show a single line up to some limit
           cout << "Enter the limit for the line of numbers: ";
           cin >> colLimit;
           singleLine( colLimit);
       }
       else if( menuChoice == '2') {
          cout << "Enter the size for the multiplication table: ";
          cin >> size;
           // Show all rows and columns in the multiplication table
           allRowsAndColumns(size);
       }
       else if( menuChoice == '3') {
           // Show just the selected subset of the multiplication table
           cout << "Enter the row start and limit, and the col start and limit: ";
           cin >> rowStart >> rowLimit >> colStart >> colLimit;
           selectRowsAndColumns( rowStart, rowLimit, colStart, colLimit);
       }
    }
    cout << "Done." << endl;
    return 0;
} //end main()


