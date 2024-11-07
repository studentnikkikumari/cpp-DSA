//function for binary search in array
#include<iostream>
using namespace std;
int binsearch(int arr[],int n,int se){
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==se){
          return mid;
        }
        else if(arr[mid]>se){
          end = mid-1;
        }
        else{
          start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[5],search,i;
    int l = sizeof(arr)/sizeof(int);

    cout<<"Enter Elements of array in sorted form:";
    for(i=0;i<l;i++){
      cin>>arr[i];
    }
    cout<<"Enter elements to search:";
    cin>>search;
    int temp = binsearch(arr,l,search);
    if(temp==-1){
      cout<<"searching value not found";
    }
    else{
      cout<<"searching value found";
    }
    return 0;
} 