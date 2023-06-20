//ii. Using Pointers:


#include<iostream>
using namespace std;

int main()
{
    int num1, num2, num3, sum=0;
    int *ptr1, *ptr2, *ptr3;
    cout<<"Enter three numbers: "<<endl;
    cin>>num1>>num2>>num3;
    ptr1=&num1;
    ptr2=&num2;
    ptr3=&num3;
    sum=*ptr1+*ptr2+*ptr3;
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}
