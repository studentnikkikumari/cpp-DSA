//function to calculate allprime number from 2 to n

#include<iostream>
using namespace std;
bool isprime(int n){
    int f=1 ;
    for(int j=2;j<=n/2;j++){
        if(n % j == 0){
            return false;
        }
    }
    return true;
}
void allprime(int n){
    cout<<"All prime from 2 to "<<n<<endl; 
    for(int i=2;i<=n;i++){
        if(isprime(i))
          cout<<i<<" ";
    }
}
int main()
{
   int num;
   cout<<"Enter number of terms:";
   cin>>num;
   allprime(num); 
  return 0;
}