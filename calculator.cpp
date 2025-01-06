#include <iostream>
using namespace std;
int add(float x, float y)
{
 return x+y;
}
int sub(float x,float y)
{
return x-y;
}
int multiply(float x,float y)
{
return x*y;
}
int divide(float x,float y)
{
return x/y;
}
int main()
{
const int size=100;

cout<<"----------SIMPLE-CALCULATOR-----------"<<endl;
float number [size];
char operater[5];
int option;

cout<<"ENTER NUMBER TO OPERATE:";
cin>>number[0];
cout<<"ENTER OPERATOR ( +,-,*,/) :";
cin>>operater[0];
cout<<"ENTER NUMBER TO OPERATE:";
cin>>number[1];
cout<<"ENTER 1 FOR RESULT AND 2 TO ADD ANOTHER NUMBER TO OPERATE:";
cin>>option;
if(option==1)
 {
    if(operater[0]=='+')
    cout<<"RESULT="<<add(number[0],number[1])<<endl;
    if(operater[0]=='-')
    cout<<"RESULT="<<sub(number[0],number[1])<<endl;
    if(operater[0]=='*')
    cout<<"RESULT="<<multiply(number[0],number[1])<<endl;
    if(operater[0]=='/')
    cout<<"RESULT="<<divide(number[0],number[1])<<endl;

    


    
    
    
    
    
    
    
    }

}





