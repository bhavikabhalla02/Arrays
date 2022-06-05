#include<iostream>


#include<bits/stdc++.h>

using namespace std;

void swapAlternate(int arr[] ,int n){
    for(int i=0;i<n;i+=2)
    if(i+1<n){
        swap(arr[i],arr[i+1]);
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int even[8]={4,3,6,5,7,8,1,2};
    int odd[5]={4,8,1,2,3};
    swapAlternate(even,8);
    printArray(even,8);

    swapAlternate(odd,5);
        printArray(odd,5);
}