#include<stdio.h>
int main()
{
 float celsius, fahrenheit;
 int N;
 printf("Chose conversion\n  1. from Fahrenheit-Celsius\n  2. from celsius-fahrenheit\n");
 scanf("%d", &N);
 switch(N){
 	case 1:
 		 printf("\n Enter Number  in Fahrenheit : ");
 		scanf("%f", &fahrenheit);

 		celsius = (fahrenheit-32) / 1.8;
 		printf("\n Temperature in Celsius : %.2f ", celsius);
 		break;
 	case 2:
 		printf("\n Enter Number in Temp  : ");
 		scanf("%f", &celsius);
 		
 		fahrenheit=celsius*1.8+(-32);
 		printf("\n Temperature in Fahrenheit : %.2f ", fahrenheit );
 		break;
    }

 return 0;

}
