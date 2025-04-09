#include<iostream>
using namespace std;
int main(){

    //check out the alphabet  & special chars
char ch;
cout<<"enter the character: ";
cin>>ch;

int x = int(ch);
cout<<"its ascii value :"<<x<<endl;

if((x>=65 && x<=90) || (x>=97 && x<=122))cout<<"it is a Alphabet";
else cout<<"it is  a special char";






}