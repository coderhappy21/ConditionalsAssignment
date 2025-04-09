#include<iostream>
using namespace std;
int main(){

    //check out the point on x-axis , y-axis, origin
int x;
cout<<"enter the x cordinate: ";
cin>>x;

int y;
cout<<"enter the y cordinate: ";
cin>>y;


if((x == 0) && (y==0)) cout<<" Point is lies on origin";
else if((x == 0) ) cout<<" Point is lies on y-axis";
else if((y == 0) ) cout<<" Point is lies on x-axis";
else cout<<" Point is lies somewhere on quadrants 1,2,3,4";






}