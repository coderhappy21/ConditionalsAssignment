#include<iostream>
using namespace std;
int main(){

//area vs circumference of circle
float R;
cout<<"enter the radius: ";
cin>>R;

float A ;
A = 3.14 * R* R;
cout<<"area of circle: "<<A<<endl;

float C;
C = 2* 3.14 * R;
cout<<"circumference of circle: "<<C<<endl;

if(A==C) cout<<"Area & circumference both are equals";
else if(A>C) cout<<"Area is larger than circumference";
else cout<<"Circumference is larger than area";



}