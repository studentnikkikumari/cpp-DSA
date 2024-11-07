
//function to check for prime number.

#include<iostream>
using namespace std;
void isprime(int n){
    int i,f=1;
    for(i=2;i<=n/2;i++){
        if(n % i == 0){
            f=0;
            break;
        }
    }
    if(f==1){
        cout<<n<<" is prime";
    }
    else{
        cout<<n<<" is not prime";
    }
}
int main()
{
    int num;
    cout<<"Enter any number:";
    cin>>num;
     isprime(num);
    return 0;
}