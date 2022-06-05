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


int search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
       else{
          return -1;
       } 
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
int d;
	cout<<"Element to be serached is"<<d;
	cout<<endl;

search(arr,n,d);
	cout<<endl;
        //cout<<"hello"<<endl;
	return 0;
}


