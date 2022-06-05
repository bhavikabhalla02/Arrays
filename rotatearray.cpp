/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdio.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

void inputArray(int arr[],int n){
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<" ";
}
// void rotateByOne(int arr1[],int n){
//     int temp=arr1[0];
//     for(int i=1;i<n;i++)
//     arr1[i-1]=arr1[i]; //here we are shifting element at current position to the current position -1
//     //then elemnt at last place will be empty so we will copy the first elemnt by storing it in temp 
    
// arr1[n-1]=temp; // copy elment
// }

// void rotateArray(int arr1[],int n,int d){
  
//     for(int i=0;i<d;i++)
//     rotateByOne(arr1,n);
// }

void reverseArray(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void rotateArray(int arr[],int n,int k){
    
    k=k%n;
    reverseArray(arr,0,n-k-1);
    reverseArray(arr,n-k,n-1);
    reverseArray(arr,0,n-1);
}
int main()
{
  
    int n,d;
      cout<<"Enter how many elements  are present in array"<<endl;
    cin>>n;
    int arr[n];
inputArray(arr,n);

printArray(arr,n);
cout<<endl;
cout<<"Enter how many  times you want to rotate the array"<<endl;
cin>>d;
rotateArray(arr,n,d);
cout<<endl;
printArray(arr,n);

    return 0;
}
