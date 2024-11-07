// function to search elements in 2d arry using binary search
#include<iostream>
using namespace std;
bool binsear2darr(int mat[][2],int m ,int n,int search){
    int start =0;
    int end = m*n-1;
    while(start<=end){
        int mid = (start+end)/2;
        int midval = mat[mid/n][mid%n];
        if(midval == search){
            cout<<search<<" is found in this 2d array at index "<<(mid/n)<<","<<(mid%n)<<endl;
            return true;
        }
        else if(midval<search){
            start = mid+1;
        }
        else{
            end = mid -1;
        }
    }
    cout<<search<<"  is not found in this 2d array:";
    return false;
}
int main()
{
    int mat[3][2],i,j,search;
    cout<<"Enter elements of 2d-array in sorted form:";
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            cin>>mat[i][j];
        }
    }
    cout<<"Enter elements to search:";
    cin>>search;
    binsear2darr(mat,3,2,search);
    return 0;
}