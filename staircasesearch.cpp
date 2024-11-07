//function to search elements of 2d-arry using staircase approach
#include<iostream>
using namespace std;
bool staircasesearch(int arr[][2],int m,int n,int search){
      int i=0,j=n-1;
      while(i<m && j>=0){
        if(arr[i][j]==search){
            cout<<search<<" is found at index "<<i<<","<<j<<endl;
            return true;
        }
        else if(arr[i][j]<search){
            i++;
        }
        else{
            j--;
        }
      }
      cout<<"searching value not found";
      return false;
}
int main(){
    int arr[3][2],i,j,search;
    cout<<"Enter elements of array in sorted order:";
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Enter elements to search: ";
    cin>>search;
    staircasesearch(arr,3,2,search);
    return 0;
}
