#include<iostream>
using namespace std;
int main(){

    //area vs perimenter of rectangle
float L;
cout<<"enter the length: ";
cin>>L;

float B;
cout<<"enter the breadth: ";
cin>>B;

float A ;
A = L* B;
cout<<"area of rectangle: "<<A<<endl;

float P;
P = 2*(L+B);
cout<<"perimeter of rectangle: "<<P<<endl;

if(A>P) cout<<"Area is larger than perimeter";
else cout<<"perimeter is larger than area";



}