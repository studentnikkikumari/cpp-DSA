// program to reverse array
#include<iostream>
using namespace std;
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
    for(i=0;i<5/2;i++){
        int temp = arr[i];
        arr[i] = arr[5-i-1];
        arr[5-i-1] = temp;
    }

    cout<<endl<<"Elements of reverse array:"<<endl;
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
