#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    int prev,i;
   for( i=1;i<n;i++){
    int curr = arr[i];
     prev = i-1;
    while(prev>=0 && arr[prev]>curr){
        swap(arr[prev],arr[prev+1]);
        prev--;
    }
    arr[prev+1] = curr;
   }
   for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}
int main()
{
    int arr[5],i;
    cout<<"Enter elements of array:";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    insertionsort(arr,5);
    return 0;
}