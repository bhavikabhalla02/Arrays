
#include <iostream>
using namespace std;
class arraydemo12

{
private:
   
    int arr[n];

public:
    arraydemo12()
    {
        
    }
   
    
    void inputArray(int n);
        void displayArray(int n);


   
   
};

int main()
{
    arraydemo12 d1;
int n;
d1.inputArray(n);
d1.displayArray(n);

   

  
 
 

    return 0;
}







void inputArray(int N){
    for(int i=0;i<N;i++){
        cin>>arr[i];
        
    }
}
void displayArray(int arr[],int N){
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}


