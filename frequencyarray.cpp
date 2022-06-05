/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
#include<stdio.h>
using namespace std;
 
 void inputArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
}


void isSorted(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void printFrequency(int arr[], int n){
    isSorted(arr,n);
    printArray(arr,n);
    cout<<endl;
    int freq=1;
    int i=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            freq++;
            i++;
        }
        cout<<"Freq is"<<" "<<freq;
        cout<<" ";
        cout<<"Element is"<<" "<<arr[i-1]<<" ";
        cout<<endl;
        i++;
        freq=1;
    } 
        if(n==1 || arr[n-1]!=arr[n-2]){
            cout<<"freq="<<1;
                      cout<<" ";
             cout<<"Element is"<<" "<<arr[n-1];
  
        }
    

}



int main()
{
int n,arr[n];
cin>>n;
cout<<"hi"<<endl;
inputArray(arr,n);
printArray(arr,n);
cout<<endl;

printFrequency(arr,n);
    return 0;
}