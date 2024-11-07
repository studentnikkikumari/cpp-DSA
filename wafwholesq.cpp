#include<iostream>
using namespace std;
int wholesq(int a,int b){
    return a*a + b*b + 2*a*b;
}
int main()
{
    int a,b;
    cout<<"Enter any two number:";
    cin>>a>>b;
    cout<<wholesq(a,b);
}