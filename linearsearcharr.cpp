// program to search a particular element in array in linear way.
#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,search,f=0;

    cout<<"Enter elements of array:";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search:";
    cin>>search;
   // int f=0;
    for(i=0;i<5;i++){
        if(arr[i]==search){
            f=1;
            break;
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