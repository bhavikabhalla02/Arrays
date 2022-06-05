#include <iostream>
#include <climits>

using namespace std;
int main()
{


 int n;
        cin >> n;
        int arr[n];
        // for accessing array elents 

         for (int i=0;i<n;i++){
             cin>> arr[i];
         }

         int maxNo=INT_MIN;
         // we can intialise it to 0 but then it will take garbage values\
         // so we will initalise it to INT_MIN because if anything is grater than INT_MIN then can be replaced by arr[i]
         int minNo=INT_MAX;
                  // so we will initalise it to INT_MAX because if anything is lesser than INT_MAX then can be replaced by arr[i]


         for(int i=0;i<n;i++){
            //  if(maxNo>arr[i]){
            //      maxNo=arr[i];
            //  }
            maxNo=max(maxNo,arr[i]);
            //  if(minNo<arr[i]){
            //      minNo=arr[i];
            //  }
            minNo=min(minNo,arr[i]);
            // min and max are built in functions functions in cpp and instead of writing 3 line of code we can this it will give max no out of maxNo and arr[i]  and min no out of minNo and arr[i] 

         }
         cout << maxNo << " " << minNo << endl;
}