#include<iostream>// preprocessor directive
using namespace std;

int main()// start program from main
{
 int number;
cout<<"Enter your number";
cin>>number;
if(number>=90)
{
cout<<"A+";
}
else if(number>=80)
{
cout<<"A";
}
else if(number>=70)
{
cout<<"B";
}
else if(number>=60)
{
cout<<"C";
}
else if(number>=50)
{
cout<<"D";
}
else
{ 
cout<<"Fail";
}
    return 0;
}