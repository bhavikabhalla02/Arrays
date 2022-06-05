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
#include<climits>
#include<stdio.h>

using namespace std;


int majorityElement(int arr[],int n){
    int res=0,count=1;
    // in starting we set/intialise the first element as majority one
    for(int i=1;i<n;i++){
        //cout<<"b"<<endl;
        if(arr[res]==arr[i])
        count++;
        else
        count--;
        if(count==0){
        res=i;
        count=1;
        }
    }
  
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i]);
        count++;
        if(count<=n/2)
        res=-1;
    }
    // this second for loop is checking whetherthe eleemnt  we find as majority is actually occurring  majority no of times or not
    return res;
}
// int majorityElement(int arr[],int n){
  
//     for(int i=0;i<n;i++){
//          int count=1;
//         for(int j=i+1;j<n;j++)
//           if(arr[i]==arr[j])
//               count++;
          
//             if(count>n/2)
//              return i;
//     } 
            
//             return -1;
 


      
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
	cout<<"Element present in array are"<<endl;
    printArray(arr,n);
cout<<endl;
cout<<"The majority element is present at: "<<" ";
cout<<majorityElement(arr,n);
//cout<<ans;

	



// cout<<endl;
        //cout<<"hello"<<endl;
	return 0;
}


