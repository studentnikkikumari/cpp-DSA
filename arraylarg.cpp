// program to find largest and smallest in an array.

#include<iostream>
using namespace std;
int main()
{
    int arr[5],i;
    cout<<"Enter elements of array:";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Elements of array : "<<endl;
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    int max = arr[0];
    int min = arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<endl<<"Largest element of array:" <<max<<endl;

   /*/ int min = arr[0];
    for(i=0;i<5;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }*/
    cout<<"smallest element of array: "<<min<<endl;

    return 0;
}