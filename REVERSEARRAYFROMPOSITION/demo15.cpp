#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

void reverseArray(vector<int> &arr , int m)
{
	//
	int s=m+1;
	int e=arr.size()-1;
	while(s<=e){
		swap(arr[s],arr[e]);
		s++;
	e--;
	}
	
}

 

void printArray(vector<int> arr[],int N){
   for(int i=0;i<arr.size();i++) {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int main(){
       vector<int> v[6];
    v.push_back(1);
    v.push_back(2);
        v.push_back(3);
          v.push_back(4);
            v.push_back(5);
              v.push_back(6);
    printArray(v,6);

    reverseArray(v,6);

    printArray(v,6);

}