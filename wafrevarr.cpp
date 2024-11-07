// function to reverse array
#include<iostream>
using namespace std;
int reverse(int arr[],int n){
   for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    cout<<"Elements of reverse array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5],i;
    cout<<"Enter elements of array:";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Elements of array:"<<endl;
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
   
    reverse(arr,5);

    return 0;
}
