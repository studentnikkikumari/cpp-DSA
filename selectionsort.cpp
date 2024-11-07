#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    int i,j,minidx;
    for(i=0;i<n-1;i++){
        minidx = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx = j;
            }
        }
        swap(arr[i],arr[minidx]);
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
    selectionsort(arr,5);
    return 0;
}