#include<iostream>
#include <climits>
#include<stdio.h>

using namespace std;


void subArray(int arr[],int n){
  
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
        
            
            for(int k=i;k<=j;k++){
                
                cout<<arr[k]<<" ";
               
                
               
                
                }
            }
              
        }
        
    }
      


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

int main()
{
     int n,arr[n];
    cout<<"Enter how many elements are there in array"<<endl;
    cin>>n;
	inputArray(arr,n);
	cout<<"Element in array are"<<endl;
    printArray(arr,n);
cout<<endl;


	cout<<"The subarray is: "<<" ";
	subArray(arr,n);



cout<<endl;
        //cout<<"hello"<<endl;
	return 0;
}


