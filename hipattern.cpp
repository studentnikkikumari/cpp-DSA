#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=10;j++){
            if(j==1||j==7||j==10||(i==4)&&(j==2||j==3||j==4||j==5||j==6)){
             cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}