// Online C++ compiler to run C++ program online
#include<iostream>
#include<stdio.h>
using namespace std;

// // int findSmallest(int arr[],int n){
// //     int min;
// //     min=arr[0];

// // for(int i=1;i<n;i++){
// //   if(arr[i]<min){
// //         min=arr[i];
// //     }
   
// // }
// return min;
// }
int findSmallest(int arr[],int n){
    int min=1;

for(int i=0;i<n;i++){
   if(arr[i]<arr[min]){
        min=i;
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
    
}

int main()
{
   int n,arr[n];
   cout<<"Enter no of elements in array"<<endl;
   cin>>n;
   inputArray(arr,n);

   printArray(arr,n);
   cout<<endl;
    cout<<findSmallest(arr,n);
    cout<<endl;

   cout<<"dds"<<endl;
    return 0;
}