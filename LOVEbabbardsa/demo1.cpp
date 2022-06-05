//array - similar type of datatype

// sirf cars ya sirf dosa ya sirf pizza
//in this data is stored in contiguous memory location
//it is used to store multiple values in single variable


#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // declare an array
int arr[7];
// if we do not intialise an array it stores some garbage values
// printing an arrray or accessing elements of array

 cout<<arr[2]<<endl;
 
 cout<<arr[3]<<endl;
 
 cout<<arr[6]<<endl;


//accessing element of index greater than size
 cout<<arr[14]<<endl;

// intitialising an array
 int v[4]={1,2,3,4};
 cout<<v[2]<<endl;
 cout<<v[3]<<endl;
cout<<v[6]<<endl;



int v2[10]={2,4};
int m=10;

int v2size=sizeof(v2)/sizeof(int);  // to find size of each block what we do  is find whole array size divide by int size 40/4=10 for eg
cout<<"Size of v2 is: "<<v2size<<endl;
//printArray(v2,m);

// how to initialise an whole array with some value
cout<<endl;

int v3[15]={2};
int n=15;

//printArray(v3,n);

int v4[12]={0};
int j=12;

//printArray(v4,j);



// DIFFERENT TYPE OF ARRAYS

char ch[5]={'a','b','c','t','g'};
// cout<<ch[2]<<endl;
// cout<<ch[3]<<endl;
// cout<<ch[4]<<endl;




    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }
    cout<<"Printing is done"<<endl;




 
 return 0;
}