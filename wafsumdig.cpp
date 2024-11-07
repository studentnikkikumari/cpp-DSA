//FUNCTION TO CALCULATE THE SUM OF DIGITS OF A NUMBER.
#include<iostream>
using namespace std;
int digsum(int n){
    int sum =0;
    while(n>0){
        int dig = n % 10;
        sum = sum + dig;
        n = n/10;
    }
    return sum;
}
int main()
{
    int num;
    cout<<"Enter any number:";
    cin>>num;
    cout<<"sum of digits of "<<num<<" :"<<digsum(num);
    return 0;
}