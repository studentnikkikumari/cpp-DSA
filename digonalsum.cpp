#include<iostream>
using namespace std;
int digonalsum(int arr[][4],int n){
    int i,j,sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i][i];
        if(i!=n-i-1){
            sum+=arr[i][n-i-1];
        }
       /*for(j=0;j<n;j++){
            if(i==j){
                sum+=arr[i][j];
            }
            else if(j==n-i-1){
                sum+=arr[i][j];
            }
        }*/
    }
    return sum;
}
int main()
{
    int arr[4][4],i,j;
    cout<<"Enter elements of array:";
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"sum : "<<digonalsum(arr,4);

    return 0;
} 