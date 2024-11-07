// function to find  max sum of subarray of given array
#include<iostream>
#include<algorithm>
#include<limits.h>

using namespace std;

int printsubarrays(int arr[],int n){
    int maxsum = INT_MIN;
    for(int start=0;start<n;start++){
        int currsum = 0;
        for(int end=start;end<n;end++){
            currsum += arr[end];
         maxsum = max(maxsum,currsum);
        }
    }
    return maxsum;
}
int main()
{
    int arr[5];
    cout<<"Enter elements of array:";
    for(int i=0;i<5;i++){
     cin>>arr[i];
    }
    cout<<"maximum subarray sum = " << printsubarrays(arr,5)<<endl;
    return 0;
}