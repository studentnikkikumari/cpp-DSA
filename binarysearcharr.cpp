#include<iostream>
using namespace std;
int main()
{
    int arr[5],start=0,end,mid,search,i,f=0;
    int l = sizeof(arr)/sizeof(int);
    cout<<"Enter Elements of array:";
    for(i=0;i<l;i++){
      cin>>arr[i];
    }
    cout<<"Enter elements to search:";
    cin>>search;
    end = l-1;
    while (start<=end)
    {
        mid = (start + end)/ 2;
        if(arr[mid]==search){
           f=1;
           break;
        }
        else if(arr[mid]<search){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    if(f==1){
        cout<<"searching value found";
    }
    else{
        cout<<"searching value not found";
    }
    
    return 0;
}