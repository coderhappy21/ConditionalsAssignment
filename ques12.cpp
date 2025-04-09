#include<iostream>
using namespace std;
int main(){

//A menu driven convertor program
int x;
cout<<"enter 1 for (cm to ft): "<<endl;
cout<<"enter 2 for (km to miles): "<<endl;
cout<<"enter 3 for (USD to inr): "<<endl;
cout<<"enter 4 for (exit): "<<endl;
cin>>x;

float cm , km ,usd;
if(x==1) 
{cout<<"enter the cm : ";
cin>>cm;
float ft = cm/30.48;
cout<<cm<<" cms into ft is : "<<ft;}

if(x==2)
 {cout<<"enter the km : ";
cin>>km;
float miles = km*0.621371;
cout<<km<<" kms into miles is : "<<miles;}

if(x==3) 
{cout<<"enter the usd : ";
cin>>usd;
float inr = usd*85;
cout<<usd<<" usd into inr is : "<<inr;}

if(x==4) cout<<"thanks for visit ";








}