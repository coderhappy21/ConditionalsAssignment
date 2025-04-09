#include<iostream>
using namespace std;
int main(){

    //check out the point falls on one stright line
int x1 , y1;
cout<<"enter the point 1: ";
cin>>x1>>y1;

int x2 , y2;
cout<<"enter the point 2: ";
cin>>x2>>y2;

int x3 , y3;
cout<<"enter the point 3: ";
cin>>x3>>y3;


float slope1 ;
slope1 = (y2-y1)/(x2-x1);
cout<<"slope of point 1 & 2 is :"<<slope1<<endl;

float slope2 ;
slope2 = (y3-y2)/(x3-x2);
cout<<"slope of point 2 & 3 is :"<<slope2<<endl;

if(slope1 == slope2) cout<<" yes! these points are collinear & falls on a straight line";
else cout<<" No! these points are,nt collinear & not falls on a straight line";






}