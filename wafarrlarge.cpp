//function to calculate largest and smallest in array.
#include<iostream>
using namespace std;
int arrmax(int arr[],int n){
     int i,max;
     max = arr[0];
     for(i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
      }
     }
     return max;
}
int arrmin(int arr[],int n){
    int i,min;
    min = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int arr[5],i;
    cout<<"Enter elemens of array:";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
   cout<<"greatest element of arr: " <<arrmax(arr,5)<<endl;
   cout<<"smallest element of arr: " <<arrmin(arr,5)<<endl;
   return 0;
}