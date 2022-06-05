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
#include<climits>
#include<stdio.h>

using namespace std;


int subArraySum(int arr[],int n){
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
               

            }
             maxSum=max(maxSum,sum);
        }
    }
  return maxSum;
}
      

// int maximumSubarraySum(int arr[],int n) {
 
//   int maxSum = INT_MIN;
//   int currSum = 0;

//   for (int i = 0; i <= n - 1; i++) {
//     currSum += arr[i];

//     if (currSum > maxSum) {
//       maxSum = currSum;
//     }

//     if (currSum < 0) {
//       currSum = 0;
//     }
//   }

//   return maxSum;

// }

void inputArray(int arr[],int n){
    cout<<"hi"<<endl;
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

cout<<"The maxsum of subarray is: "<<subArraySum(arr,n);

	



// cout<<endl;
        //cout<<"hello"<<endl;
	return 0;
}


