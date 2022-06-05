#include<iostream>
using namespace std;


void rotateArrayClockwise(int array[], int N)   
{   
int i, temp;   
  
temp = array[0];   
for (i = 0; i <= N - 1; i++) {  
  
array[i] = array[i + 1];
}  
array[N-1] = temp;   


}

void printArray(int arr[],int N){
   for(int i=0;i<N;i++) {
       cout<<arr[i]<<endl;
   }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArray(arr,n);

    // char choice;
    // cin>>choice;

// int times;
//     cin>>times;
// for(int i=0;i<times;i++){
//     if(choice=='c'){
        rotateArrayClockwise(arr,n);
    
    printArray(arr,n);
    

    

}
