
// Binary Search is a method to find the required element in a sorted array by repeatedly halving the array and searching in the half.

// This method is done by starting with the whole array. Then it is halved. If the required data value is greater than the element at the middle of the array, then the upper half of the array is considered. Otherwise, the lower half is considered. This is done continuously until either the required data value is obtained or the remaining array is empty.


// unlike in linear search in binary search the array is sorted


#include <iostream>
#include <climits>

using namespace std;



int main()
{

    int n;
    cin >> n;
    int arr[n];
    // for accessing array elents

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   
   for( int i=0;i<n-1;i++)
   // n-1 becz if elements at n-1 are sorted then last will be automatically sorted
   {
       for (int j=i+1;j<n;j++){
           if(arr[j]// fisrt element ke baad se saare elements
           <arr[i]){
               int temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
           }

       }
   }
   for (int i=0;i<n;i++){
       cout << arr[i] << " ";
   }

    return 0;
}