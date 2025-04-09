#include<iostream>
using namespace std;
int main(){

    //check out equilateral,scalene,isoceles triangle
float s1;
cout<<"enter the side 1: ";
cin>>s1;

float s2;
cout<<"enter the side 2: ";
cin>>s2;

float s3;
cout<<"enter the side 3: ";
cin>>s3;


if((s1==s2) && (s2==s3)) cout<<"this is a equilateral triangle";
else if((s1!=s2) && (s2!=s3)) cout<<"this is a scalene triangle";
else cout<<"this is a isoceles triangle";



}