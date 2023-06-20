#include <stdio.h>
#include <conio.h>
int main()
{

    int a, i, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        sum += i;
    }
    printf("The sum of first %d natural numbers is %d", a, sum);
    getch();
}
