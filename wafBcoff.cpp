//FUNCTION  TO FIND THE BINOMIAL COEFFICIENT FOR GIVEN N AND R
#include<iostream>
using namespace std;

int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}
int binomialcoff(int n,int r){
    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n-r);
    
    int result = a/(b * c);
    return result;
}
int main()
{
    int n,r;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;
    cout<<binomialcoff(n,r);
    return 0;
} 