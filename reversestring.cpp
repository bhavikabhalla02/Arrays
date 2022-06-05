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

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }

        }
}
}





int main()
{
     int n,arr[n];
    cout<<"hs"<<endl;
    cin>>n;
	inputArray(arr,n);
    printArray(arr,n);
cout<<endl;

selectionSort(arr,n);
	cout<<endl;
        cout<<"hello"<<endl;
	return 0;
}

