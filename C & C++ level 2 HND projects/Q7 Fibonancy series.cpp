#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
 int n;
 cout<<"For Fibonacci Series\n\n";
 cout<<"Enter any number : ";
 cin>>n;
 cout<<"\n\n";

 int a=0,b=1,c=0;
 
 for(int i=1;i<=n;i++){
  c=a+b;
  cout<<a<<" ";
  a=b;
  b=c;
 }
 
 getch();
 return(0);
}