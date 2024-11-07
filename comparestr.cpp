#include<iostream>
#include<string.h>
using namespace std;

bool compare(char str1[],char str2[])
{
   for(int i=0;str1[i]!='\0'||str2[i]!='\0';i++){
   if (str1[i]!=str2[i]){
    cout<<"string is not same";
    return false;
    }
   } 
   cout<<"string is same";
   return true;
}
int main()
{
    char str1[]="apple";
    char str2[]="apple";
    compare(str1,str2);
    return 0;
}