#include<iostream>
using namespace std;
void spiral(int arr[][4],int m ,int n){
    int srow=0,scol=0,erow=m-1,ecol=n-1;
    int i,j;
    while(srow<=erow && scol<=ecol){
        for(j=scol;j<=ecol;j++){
            cout<<arr[srow][j]<<" ";
        }
        for(i=srow+1;i<=erow;i++){
            cout<<arr[i][ecol]<<" ";
        }
        for(j=ecol-1;j>=scol;j--){
            if(srow==erow){
               break;
            }
            cout<<arr[erow][j]<<" ";
        }
        for(i=erow-1;i>srow;i--){
            if(scol==ecol){
                break;
            }
            cout<<arr[i][scol]<<" ";
        }
        srow++,scol++,erow--,ecol--;
    }
}
int main()
{
    int arr[3][4];
    int i,j;
    cout<<"Enter elements of array:";
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    spiral(arr,3,4);
    return 0;
}