// FUNCTION TO CHECK IF NUMBER IS PALLINDROME IN C++
#include<iostream>
using namespace std;
int reverse(int n){
    int rev=0;
    while(n>0){
    int dig = n % 10;
     rev = rev * 10 + dig;
    n = n/10;
    }
    return rev;
}
bool ispallindrome (int num){
    int revnum = reverse(num);
    return num==revnum;
}
int main()
{
    int num;
    cout<<"Enter any number:";
    cin>>num;
    if(ispallindrome(num)){
        cout<<num<<" is pallindrome number";
    }
    else{
        cout<<num<< " is not pallindrome number";
    }
}