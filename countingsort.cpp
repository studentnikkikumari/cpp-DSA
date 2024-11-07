#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;
void countsort(int arr[],int n){
   int frequency[10000],i,j;
   int minval=INT_MAX,maxval = INT_MIN;
   for(i=0;i<n;i++){
    maxval=max(maxval,arr[i]);
    minval=min(minval,arr[i]);
   }
   for(i=0;i<n;i++){
    frequency[arr[i]]++;
   }
   for(i=minval,j=0;i<=maxval;i++){
    while(frequency[i]>0)
    {
        arr[j++]=i;
        frequency[i]--;
    }
   } 
   for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}
int main()
{
    int arr[8],i;
    cout<<"Enter Elements of array:";
    for(i=0;i<8;i++){
        cin>>arr[i];
    }
    countsort(arr,8);
    return 0;
}