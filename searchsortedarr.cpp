
//fuction to search elements of 2d array using bruteforce approach

#include<iostream>
using namespace std;
bool isfound(int arr[][3],int m,int n,int search){
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==search){
                return true;
            }
        }
     }
     return false;
}
int main()
{
    int arr[3][3],i,j,search;
    cout<<"Enter Elements of arr:";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter elements to search:";
    cin>>search;
    if(isfound(arr,3,3,search)){
        cout<<"searching value found";
    }
    else {
        cout<<"value not found";
    }
}