//function to calculate factorial 
#include<iostream>
using namespace std;
int factorial(int n)
{
  int i,fact=1;
  for(i=1;i<=n;i++){
    fact = fact * i;
  }
  return fact;
}
int main()
{
    int num;
    cout<<"Enter any number:";
    cin>>num;
    cout<<factorial(num);
    return 0;
}