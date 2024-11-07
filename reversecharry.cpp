//program to reverse character array
#include<iostream>
#include<string.h>
using namespace std;
void reverse(char str[],int n)
{
    int i;
    char temp;
    for( i=0;i<=n/2;i++){
        temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1]=temp;
    }
}
int main()
{
    char str[20];
    cout<<"Enter any sentence:";
    cin.getline(str,20);
    reverse(str,strlen(str));  
    cout<<str;
    return 0;
}