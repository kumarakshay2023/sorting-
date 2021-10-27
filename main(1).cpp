/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int cur=arr[i]; 
        int j=i-1;
        while(arr[j]>cur&&j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=cur;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   InsertionSort(arr,n);
}
