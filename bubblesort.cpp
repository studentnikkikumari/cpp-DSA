// sorting of elements using bubble sort
#include<iostream>
#include<utility>
using namespace std;
void bubblesort(int arr[],int n){
    int i,j;
    for( i=0;i<n-1;i++){
       // bool isswap = false;
        for( j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                //isswap = true;
            }
        }
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
    bubblesort(arr,5);
}