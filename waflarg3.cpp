// FUNCTION TO PRINT LARGEST OF THREE NUMBER
#include<iostream>
using namespace std;
int largofthree(int a,int b,int c){
    if(a>=b && a>=c){
     return a;
    }
    else if(b>=c){
        return b;
    }
    else{
        return c;
    }
}
int main()
{
    int num1,num2,num3;
    cout<<"Enter any three number:";
    cin>>num1>>num2>>num3;
    cout<<"largest number is: " <<largofthree(num1,num2,num3);
    return 0;
}