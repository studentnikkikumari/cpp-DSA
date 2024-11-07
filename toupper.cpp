#include<iostream>
#include<string.h>
using namespace std;
void touppercase(char str[],int n){
    int i;
  for( i=0;i<n;i++){
    //char ch = str[i];
    if(str[i]>='a' && str[i]<='z'){
       str[i] = str[i]-32;
    }
  }
  cout<<str;
}
int main()
{
    char str[50];
    cout<<"Enter any sentence:";
    cin.getline(str,50);
    touppercase(str,strlen(str));
    return 0;
}