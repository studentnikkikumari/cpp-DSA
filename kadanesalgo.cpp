//wap to find maxsum of subarray using kadanes

#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

int maxsubarrsum(int arr[] , int n){
    int currsum = 0;
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++){
       currsum += arr[i];
       if(currsum<0){
        currsum = 0;
       }
       maxsum = max(currsum,maxsum);
    }
    return maxsum;
}
int main()
{
    int arr[5],i;
    cout<<"Enter elements of array:";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"maximum subarray sum= "<<maxsubarrsum(arr,5)<<endl;
    return 0;
}