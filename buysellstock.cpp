#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int maxprofit(int price[] , int n){
    int bestbuy[100000],i,profit =0,maxprofit=INT_MIN;
    bestbuy[0] = INT_MAX;
    for(i=1;i<=n;i++){
        bestbuy[i] = min(bestbuy[i-1],price[i-1]);
    }
    for(i=1;i<n;i++){
      profit = price[i] - bestbuy[i];  
      maxprofit = max(maxprofit,profit);
    }
    return maxprofit;
}
int main()
{
    int arr[6],i;
    cout<<"Enter elements of array:";
    for(i=0;i<6;i++){
        cin>>arr[i];
    }
    cout<<"maximum profit :"<<maxprofit(arr,6)<<endl;
    return 0;
}