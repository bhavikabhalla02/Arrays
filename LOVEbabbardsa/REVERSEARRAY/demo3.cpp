

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverseArray(int arr[],int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    // declare an array
int arr[7]={2,8,-5,12,4,-23,89};
int arr1[4]={2,8,5,-12};
printArray(arr,7);



printArray(arr1,4);

 reverseArray(arr,7);
  reverseArray(arr1,4);


 printArray(arr,7);

 printArray(arr1,4);

 return 0;
}