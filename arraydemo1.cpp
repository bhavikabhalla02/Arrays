#include <iostream>

using namespace std;
int main()
{
//array 
//Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

//To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:
// to declare  an array
    // to access array elements it is done by using indices and by convention indices start from 0
 

        // other way to initalise  by taking input from user
        int n;
        cin >> n;
        int arr[n];
        // for accessing array elents 

         for (int i=0;i<n;i++){
             cin>> arr[i];
         }
                 // for printing array elements 

                 
         for (int i=0;i<n;i++){
             cout <<arr[i] << " ";
         }







    // another way is declaring and initialsing togetgher
    int arr2[] = {10,20,30,40};
    return 0;
}
