#include <iostream>
using namespace std;

void update(float num[],char op[],int in,int& count,int& b)
{
    for(int i=in+1;i<=count;i++)
{
num[i]=num[i+1];
}
for(int i=in;i<=b;i++)
{
    op[i]=op[i+1];

}

count--;
b--;
}

int main()
{
const int size=100;
int a=0;
int b=0;
int counter=0;

cout<<"----------SIMPLE-CALCULATOR-----------"<<endl;
float number [size];
char operater[5];
int option=0;
do{
    if(option==2)
    {
        cout<<"ENTER OPERATOR ( +,-,*,/) :";
cin>>operater[b];
    }

cout<<"ENTER NUMBER TO OPERATE:";
cin>>number[a];
counter++;
cout<<"ENTER OPERATOR ( +,-,*,/) :";
cin>>operater[b];
cout<<"ENTER NUMBER TO OPERATE:";
cin>>number[a+1];
counter++;
cout<<"ENTER 1 FOR RESULT AND 2 TO ADD ANOTHER NUMBER TO OPERATE:";
cin>>option; 
a++;
b++;
 }while(option==2);


 if (option==1)
 {

for(int i=0;i<=b;i++)

{
if(operater[i]=='/')
{   if(i>0)
    number[i-1]=number[i-1]/number[i+1];
    else
    number[i]=number[i]/number[i+1];
    update(number,operater,i,counter,b);
    
}
}
for(int i=0;i<=b;i++)
{if(operater[i]=='*')
{   if(i>0)
    number[i-1]=number[i-1]*number[i+1];
    else
    number[i]=number[i]*number[i+1];
    update(number,operater,i,counter,b);
    
}
}
for(int i=0;i<=b;i++)
{if(operater[i]=='+')
{   if(i>0)
    number[i-1]=number[i-1]+number[i+1];
    else
    number[i]=number[i]+number[i+1];
    update(number,operater,i,counter,b);
    
}
}
   for(int i=0;i<=b;i++) 
   {
    if(operater[i]=='-')
{   if(i>0)
    number[i-1]=number[i-1]-number[i+1];
    else
    number[i]=number[i]-number[i+1];
    update(number,operater,i,counter,b);
    
}}
 
    
    
    
    
    cout<<"number="<<number[0];
    
    
    }

}





