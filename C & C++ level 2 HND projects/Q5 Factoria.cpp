#include<stdio.h>
int main()
{
	int i, fact=1,Num; 
	
	printf("\nEnter the integer number : ");
	scanf("%d",&Num);
	
	for(i=1;i<=Num;++i)
	{
		fact = fact * i;
	}
	printf("\nThe factorial of %d is\n\n%d! = %d\n",Num,Num,fact);
}
