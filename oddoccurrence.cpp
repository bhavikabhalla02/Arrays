// A Simple Solution is to run two nested loops.//
// The outer loop picks all elements one by one and the inner loop counts 
///******************************************************************************

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


int findOddOccurrence(int arr[],int n){
    for(int i=0;i<n;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            
        }
        if(count%2!=0){
            return arr[i];
        }
    }
    return -1;
}


int main(){
    int n,arr[n];
    cout<<"hs"<<endl;
    cin>>n;
	inputArray(arr,n);
    printArray(arr,n);
cout<<endl;

cout<<findOddOccurrence(arr,n);
	cout<<endl;
        cout<<"hello"<<endl;
	return 0;
    
}//
//the number of occurrences of the element picked by the outer loop.
// The time complexity of this solution is O(n2).