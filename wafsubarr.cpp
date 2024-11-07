// function to find subarray of given array
#include<iostream>
using namespace std;
void printsubarrays(int arr[],int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
      
          for(int i=start;i<=end;i++){
            cout<<arr[i]<<" ";
          }
          cout<<"   ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[5];
    cout<<"Enter elements of array:";
    for(int i=0;i<5;i++){
     cin>>arr[i];
    }
    printsubarrays(arr,5);
    return 0;
}