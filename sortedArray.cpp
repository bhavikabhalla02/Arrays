#include<iostream>
using namespace std;

 
 
void inputArray (int arr[], int n)
{
  
for (int i = 0; i < n; i++)
    
cin >> arr[i];

 
} 
 
void printArray (int arr[], int n)
{
  
 
for (int i = 0; i < n; i++)
    
 
cout << arr[i] << " ";

} 
 
 
bool isSorted (int arr1[], int n) 
{
  
 
 
for (int i = 0; i < n; i++)
    {
      
 
for (int j = i + 1; j < n; j++)
	{
	  
 
if (arr1[j] < arr1[i])
	    {
	      
swap (arr1[i], arr1[j]);
	    
}
	
}
    
 
}

}


int
main () 
{
  
int n;
  
 
int arr[n];
  
 
 
cout << "Enter the size of array: ";
  
 
cin >> n;
  
 
 
cout << "Input the numbers: ";
  
inputArray (arr, n);
  
 
    //putting all the zeros at the end of array
    // for(int i = 0; i < n; i++){
    //     if(arr[i]== 0){
    //         for(int j=i+1;j<n;j++)
    //         if(arr[j]!=0)
    //         swap(arr[i], arr[j]);
    
    //     }
    // }
    
 
 
printArray (arr, n);
  
cout << endl;
  
isSorted (arr, n);
  
cout << "\nArray after sorting is: ";
  
cout << endl;
  
printArray (arr, n);
  
 
 
 
return 0;

 
}


