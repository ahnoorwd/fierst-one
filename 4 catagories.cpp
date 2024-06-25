
#include <stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
   float num1,num2;
   cin>> num1>>num2;

   cout<<showpoint;
      cout<<fixed;
   cout<<setprecision(2);
   float sum=num1+num2;
   cout<<setw(10)<<sum<<endl;

   cout<<showpoint;
      cout<<fixed;
      cout<<setprecision(2);
   float sub=num1-num2;
   cout<<setw(10)<<sub<<endl;

   cout<<showpoint;
   cout<<fixed;
      cout<<setprecision(2);
   float mul=num1*num2;
   cout<<setw(10)<<mul<<endl;
   float dev =num1/num2;
   cout<<setw(10)<<dev;

   getch();
}
