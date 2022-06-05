// Bubble Sort is a simple algorithm which is used to sort a given set of n elements provided in form of an array with n number of elements. Bubble Sort compares all the element one by one and sort them based on their values.

// If the given array has to be sorted in ascending order, then bubble sort will start by comparing the first element of the array with the second element, if the first element is greater than the second element, it will swap both the elements, and then move on to compare the second and the third element, and so on.

// If we have total n elements, then we need to repeat this process for n-1 times.

// It is known as bubble sort, because with every complete iteration the largest element in the given array, bubbles up towards the last place or the highest index, just like a water bubble rises up to the water surface.

// Sorting takes place by stepping through all the elements one-by-one and comparing it with the adjacent element and swapping them if required.


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

//     Following are the steps involved in bubble sort(for sorting a given array in ascending order):

// 1. Starting with the first element(index = 0), compare the current element with the next element of the array.
// 2. If the current element is greater than the next element of the array, swap them.
// 3. If the current element is less than the next element, move to the next element. Repeat Step 1.
   
   for( int i=0;i<n-1;i++)
   // n-1 becz if elements at n-1 are sorted then last will be automatically sorted
   {
       for (int j=0;j<n-1;j++){
           if(arr[j]// fisrt element compare with 2 element ,then 2 with 3 and so on
           >arr[j+1]){
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }

       }
   }
   for (int i=0;i<n;i++){
       cout << arr[i] << " ";
   }

    return 0;
}