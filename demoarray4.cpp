// Binary Search is a method to find the required element in a sorted array by repeatedly halving the array and searching in the half.

// This method is done by starting with the whole array. Then it is halved. If the required data value is greater than the element at the middle of the array, then the upper half of the array is considered. Otherwise, the lower half is considered. This is done continuously until either the required data value is obtained or the remaining array is empty.


// unlike in linear search in binary search the array is sorted


#include <iostream>
#include <climits>

using namespace std;



int binarySearch(int arr[], int n, int key)
{
   int s=0;
   int e=n;
   while(s<=e){
       int mid = (s+e)/2;
       if(arr[mid]==key){
           return mid;
       }
       else if(arr[mid]>key){
           e=mid-1;
       }
       else{
           s=mid+1;
       }

   }
    // if element is not found we will return -1
    return -1;
}

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
    int key; // key is the element that we need to search
    cin >> key;

    cout << binarySearch(arr, n, key);

    return 0;
}