// wap to return maximum product of subarray
#include<iostream>
using namespace std;
int maxproduct(int arr[] , int n){
    int subarrmaxpro =1;
   for(int i=0;i<n;i++){
     subarrmaxpro *= arr[i];
     if(subarrmaxpro<=0){
        subarrmaxpro=1;
     }
   } 
   return subarrmaxpro;
}
int main()
{
    int arr[5],i;
    cout<<"Enter elements of array:";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<maxproduct(arr,5);
    return 0;
}