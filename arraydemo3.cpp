#include <iostream>
#include <climits>

using namespace std;

// we will start searching from leftmost element or first element and if  element we are searching ==element to be searched (key) then we will terminate the loop and end otherwise if it is not found out we will move to next element
//A simple approach is to do a linear search, i.e

// Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
// If x matches with an element, return the index.
// If x doesn’t match with any of elements, return -1.
//linear search (Searching algorithm) which is used to find whether a given number 
//is present in an array and if it is present then at what location it occurs.
// It is also known as sequential search. It is straightforward and works as follows: We keep on comparing each element with the element to search until it is found or the list ends.

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
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

    cout << linearSearch(arr, n, key);

    return 0;
}