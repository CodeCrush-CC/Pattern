#include<iostream.h>
#include<conio.h>
void main()
{
 int n ;
 float num,num1;
 clrscr();

  cout<<"\n\nChoose the Conversion:\t" ;
  cout<<"\n1.Celcius to Fahrenheit:" ;
  cout<<"\n2.Fahrenheit to Celcius" ;
  cout<<"\nEnter your choice:\t" ;
  cin>>n ;

  if(n==1)
  {
   cout<<"\nEnter temprature in Celcius:\t" ;
   cin>>num ;
   num1 = (num*1.8) + 32 ;
   cout<<"\nIn Fahrenheit:\t"<<num1 ;
  }
  if(n==2)
  {
   cout<<"\nEnter temprature in Fahrenheit:\t" ;
   cin>>num  ;
   num1 = (num-32)/1.8 ;
   cout<<"\nIn Celcius:\t"<<num1 ;
  }
 getche();
}