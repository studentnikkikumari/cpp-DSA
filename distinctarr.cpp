//program to check all elements of array are distinct
#include<iostream>
using namespace std;
bool isduplicate(int arr[] , int n){
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            return true;
         }
        }
    }
    return false;
}
int main(){
    int nums[7],i;
    cout<<"Enter elements of array:";
    for(i=0;i<7;i++){
        cin>>nums[i];
    }
    if(isduplicate(nums,7)){
        cout<<"dupliate element found in array";
    }
    else{
    cout<<"duplicate element not found in array";
    }
}
