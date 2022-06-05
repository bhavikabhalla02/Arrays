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
#include<iostream>
#include<stdio.h>
using namespace std;
int findLargest(int arr[], int n)
{
  int lar=0;

	
	for (int i = 1; i < n; i++)
		if (arr[i] > arr[lar])
			 lar=i;

	return lar;
	
   
}
int secondLargest(int arr[], int n){
    int lar=findLargest(arr,n);
    int res=-1;
    //intially we use second largest as -1 there must be a case where there is no second largest  element
    //so we take as -1

    for(int i=0;i<n;i++){
        if(arr[i]!=arr[lar])// we consider all other elements excluding the largest one 
        {
            if(res==-1){
                res=i;
            }
            else if(arr[i]>arr[res])
            {
               res=i;

            }
            

        }
    }
    return res;

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
cin>>n;
cout<<"hi"<<endl;
inputArray(arr,n);
printArray(arr,n);
cout<<endl;
cout<<findLargest(arr,n);
cout<<endl;
cout<<secondLargest(arr,n);
cout<<endl;
cout<<"hello"<<endl;
    
    return 0;
}