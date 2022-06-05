// #include<iostream>
// #include<bits/stdc++.h>

// using namepsace std;

// int getMax(int arr[],int n){
//     int max=INT_MIN;  //int range is from -2^31 TO 2^31

//     //min=-2^31,max=2^31
//     for(int i=0;i<n;i++){
//         if(arr[i]>max)
//         max=arr[i];
//     }

//     return max;


// }

// int getMin(int arr[],int n){
//     int min=INT_MAX;  //int range is from -2^31 TO 2^31

//     //min=-2^31,max=2^31
//     for(int i=0;i<n;i++){
//         if(arr[i]<min)
//         min=arr[i];
//     }

//     return min;


// }

// int main(){
//     int size;
//     cin>>size;

//     int num[100];


//     for(int i=0;i<size;i++){
//         cin>>num[i];
//     }

  
   

//         int largest=getMax(num,size);
//            int smallest=getMax(num,size);

//     cout<<"Min value in array: "<<largest<<endl;

//     cout<<"Max value in array: "<<smallest<<endl;

// return 0;




// }
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMin(int num[], int n) {

    int mini = INT_MAX;
    
    for(int i = 0; i<n; i++) {
        
        mini = min( mini, num[i]);
        
        //if(num[i] < min){
        //    min = num[i];
        //}
    }

    //returning min value
    return mini;
}

int getMax(int num[], int n) {

    int maxi = INT_MIN;
    
    for(int i = 0; i<n; i++) {

        maxi = max(maxi, num[i]);

       // if(num[i] > max){
         //   max = num[i];
       // }
    }

    //returning max value
    return maxi;
}

int main() {

    int size;
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }

    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;


    return 0;
}