//write a function to check whether number is odd or even
#include<iostream>
using namespace std;

 void  odd_even(int n){
    if(n % 2 == 0){
        cout<<n<<" is even number";
    }
    else{
        cout<<n<<" is odd number";
    }
 } 
int main()
{
    int num;
    cout<<"Enter any number:";
    cin>>num;
    odd_even(num);
    return 0;
}