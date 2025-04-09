#include<iostream>
using namespace std;
int main(){

//predict the output - 
int a = 500 , b = 0 ,c = 0;
if(a<= 400)
b = 300;
c = 200;

cout<<"value of b and c are respectively "<<b<<" and "<<c;

//output will be - b = 0 , c = 200

//EXPLANATION -
//as you can see, this condition is false , so first line not execute
//but second line changed the value because it is independent of 
//condition due to absence block of code in if cond.{ }
//no matter it will true or false second line will defenetely execute.
//first line is depends on cond. thats why b was 0 intially and still 0
//only one line after if-else cond. will execute if you don,t use it {}
}