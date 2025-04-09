#include<iostream>
using namespace std;
int main(){

//predict the output - 
int x = 5;
if(x>3)
cout<<"hello ";
cout<<"world";


//output will be - hello world

//EXPLANATION -
//as you can see, this condition is true , so it will execute only first line
// because second line is independent of condition due to absence
//block of code in if cond.{ } 
//no matter cond. will true or false second line will defenetely execute.
//only first line is depends on cond. if the cond become false it will not execute
//only one line after if-else cond. will execute if you don,t use it {}
}