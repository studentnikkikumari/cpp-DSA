#include<iostream>
using namespace std;

int main()
{
    int arr[5],i,j,min;
    cout<<"Enter elements of array:";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    for(i=0;i<4;i++){
        min = arr[i];
        for(j=i+1;j<5;j++){
            if(arr[j]<min){
                min = arr[j];
            }
        }
        swap(arr[i],min);
    }
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}