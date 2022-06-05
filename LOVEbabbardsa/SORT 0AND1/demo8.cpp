


#include<bits/stdc++.h>
using namespace std;


void SortOne(int arr[],int n){
    int left=0,right=n-1;
    while(left<=right){
        while(left==arr[0])
        left++;
        while(right==arr[1])
        right--;

if(arr[left]==1 && arr[right]==0 && left<right ){
        swap(arr[left],arr[right]);
        left++;
        right--;
}

    }
}
void printArray(int arr[],int n)  // void menas that the function will return something but users do not want to capture it

{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    // declare an array
int arr[7]={1,1,0,0,0,1,0};


SortOne(arr,7);

printArray(arr,7);

 
 return 0;
}