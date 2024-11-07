// function to search elements of array linearly.
#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int se){
   for(int i=0;i<n;i++){
    if(arr[i]==se){
        return i;
    }
   }
   return -1;
}
int main(){
    int arr[5],i,search;
    cout<<"Enter elements of array:";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search:";
    cin>>search;
    int temp = linearsearch(arr,5,search);
    if(temp==-1){
        cout<<"searching value not found in array";
    }
    else{
        cout<<"searching value found in array";
    }
    return 0;
}