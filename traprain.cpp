// rain water trapping using array
#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

int trapwater(int height[] , int n){
 int rightmax[100000],leftmax[100000],watertrapped = 0,currwater ;
  leftmax[0] = INT_MIN;
  rightmax[n-1] = INT_MIN;
  for(int i=1;i<n;i++){
    leftmax[i] = max(leftmax[i-1],height[i-1]);
  }
  for(int i=n-2;i>=0;i--){
    rightmax[i] = max(rightmax[i+1],height[i+1]); 
  }
  for(int i=1;i<=n-2;i++){
    int currwater = min(leftmax[i],rightmax[i])-height[i];
    if(currwater>0){
        watertrapped += currwater;
    }
  }
  return watertrapped;
}
int main(){
    int height[7],i;
    cout<<"Enter elements of array:";
    for(i=0;i<7;i++){
        cin>>height[i];
    }
    cout<<trapwater(height,7);
}