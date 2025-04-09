#include<iostream>
using namespace std;
int main(){

    //check out the least marks student
int A;
cout<<"enter the student A marks: ";
cin>>A;

int B;
cout<<"enter the student B marks: ";
cin>>B;

int C;
cout<<"enter the student C marks: ";
cin>>C;


if((A<B) && (A<C)) cout<<" Student A got least marks";
else if((B<A) && (B<C)) cout<<" Student B got least marks";
else if((C<B) && (C<A)) cout<<" Student C got least marks";
else cout<<"all has equal marks";



}