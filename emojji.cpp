#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            if(i==1||i==9||j==1||j==9||i==3&&j==3||i==3&&j==7||i==6&&j==4||i==6&&j==5||i==6&&j==6){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}