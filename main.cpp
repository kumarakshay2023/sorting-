// bubble sort

#include <iostream>

using namespace std;
void Bubble_Sort(int Arr[],int n){
    int flag;
    for(int i=0;i<n;i++){
        flag=0;
        for(int j=0;j<n-1-i;j++){
            if(Arr[j]>Arr[j+1]){
                swap(Arr[j],Arr[j+1]);
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
  for(int i=0;i<n;i++){
      cout<<Arr[i]<<" ";
  }
}

int main()
{
    int n;
    cin>>n;
     int Arr[n];
       for(int i=0;i<n;i++){
           cin>>Arr[i];
       }
      Bubble_Sort(Arr,n);
}
