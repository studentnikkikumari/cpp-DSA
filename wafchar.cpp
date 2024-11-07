//FUNCTION THAT ACCEPTS A CHARACTER AS PARAMETERS AND RETURNS THE CHARACTERS THAT OCCURS AFTER CH IN THE ENG ALPHABET

#include<iostream>
using namespace std;
char alphabet(char ch){
    if(ch == 'z'){
        return 'a';
    }
    else if(ch == 'Z'){
        return 'A';
    }
    else{
        return ch=ch+1;
    }
}
int main()
{
    char ch;
    cout<<"Enter any character:";
    cin>>ch;
    cout<<alphabet(ch);
}