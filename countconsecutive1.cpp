


#include<iostream>
#include<climits>
#include<stdio.h>

using namespace std;

int countConsecutive1(bool arr[],int n){
 int res=0,curr;
    for(int i=0;i<n;i++){
      
          if(arr[i]==0){
          curr=0;
          }
          else{
                curr++;
                  res=max(res,curr);
          }
     
    }
    return res;
  
   
}


// // int countConsecutive1(bool arr[],int n){
// //     int res=0;
// //     for(int i=0;i<n;i++){
// //       int curr=0;
// //         //cout<<"b"<<endl;
// //       for(int j=i;j<n;j++){
// //           if(arr[j]==1){
// //           curr++;
// //           }
// //           else{
// //                 break;
// //           }
// //       }
// //       res=max(res,curr);
// //     }
// //     return res;
  
   
// }
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
     int n;
     int arr[n];
     bool arr1[n];
    cout<<"Enter how many elements are there in array"<<endl;
    cin>>n;
	inputArray(arr,n);
	cout<<"Element present in array are"<<endl;
    printArray(arr,n);
cout<<endl;
cout<<"The Consecutive 1s count is : "<<" ";
cout<<countConsecutive1(arr1,n);
//cout<<ans;

	



// cout<<endl;
        //cout<<"hello"<<endl;
	return 0;
}


