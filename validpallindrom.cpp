#include<iostream>
#include<string.h>
using namespace std;
bool ispallindrome(char str[],int n){
    int st = 0,end = n-1;
    while(st<end){
        if(str[st++]!=str[end--]){
            cout<<"not valid pallindrome";
            return false;
        }
    }
      cout<<"valid pallindrome";
            return true;
}
int main()
{
    char str[20];
    cout<<"Enter any string:";
    cin>>str;
    ispallindrome(str,strlen(str));
    return 0;
}
