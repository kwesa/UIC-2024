#include <iostream>
#include <cstdlib>
using namespace std;

    int main(){

    int arr[5] = { }, arr2[5] = { };
    int min = 0, max = 10, random, random2;

    srand(time(0));
 

    for (int i = 0; i < 5; i++){
    arr[i] = rand() % (max - min + 1) + min;
    arr2[i] = rand() % (max - min + 1) + min;
    }

    for (int i = 0; i < 5; i++){
    if(arr[i] > arr2[i]){
    cout << arr[i] << " is greater than " << arr2[i] << endl;
    }
    else if(arr[i] < arr2[i]){
    cout << arr[i] << " is less than " << arr2[i] << endl;
    }
    else{
    cout << arr[i] << " is equal to " << arr2[i] << endl;
    }
    };

}