//write a function  to calculate the product

#include<iostream>
using namespace std;

int product(int a, int b){
    return a*b;
}
int main()
{ 
    int num1,num2;
    cout<<"Enter any two number:";
    cin>>num1>>num2;
    cout<<"product of given number:" <<product(num1,num2);
    return 0;
}