// #include <iostream>

// using namespace std;
// int main()
// {
// //array 
// //Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

// //To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:
// // to declare  an array
//     int arr1[4];
//     // to access array elements it is done by using indices and by convention indices start from 0
//     arr1[0] = 5;
//     arr1[1] = 10;

//     arr1[2] = 15;

//     arr1[3] = 20;
//         cout << arr1[3]<< endl;

//         // other way to initalise  by taking input from user
//         int n;
//         cin >> n;
//         int arr[n];
//         // for accessing array elents 

//          for (int i=0;i<=n;i++){
//              cin>> arr[i];
//          }
//                  // for printing array elements 

                 
//          for (int i=0;i<=n;i++){
//              cout <<arr[i] << " ";
//          }







//     // another way is declaring and initialsing togetgher
//     int arr2[] = {10,20,30,40};
//     return 0;
// }
#include<iostream>
#include<stdio.h>
using namespace std;

int findSmallest(int arr[],int n){
    int min;
    min=arr[0];

for(int i=1;i<n;i++){
   if(arr[i]<min){
        min=arr[i];
    }
   
}
return min;
}
void inputArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    cout<<"ho"<<endl;
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

        
    }
    cout<<"hm"<<endl;
}

int main()
{
   int n,arr[n];
   cout<<"Enter no of elemnts in array"<<endl;
   cin>>n;
   inputArray(arr,n);

   printArray(arr,n);
    cout<<findSmallest(arr,n);
    cout<<endl;

   cout<<"dds"<<endl;
    return 0;
}