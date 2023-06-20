#include<stdio.h>
float 	mintwo(float A,float B){
	float ans;
	if(A>B){
		ans=B;
	}
	else{
		ans=A;
	}
	return ans;
}

float 	minFOUR(float A,float B, float C,float D ){
	float ans;
	if(A<B<C<D){
		ans=A;
	}
	else if(B<A<C<D){
		ans=B;
	}
	else if(C<A<B<D){
		ans=C;
	}
	else if(D<A<B<C){
		ans=D;
	}
	return ans;
}
float 	sumFOUR(float A,float B, float C,float D ){
	float sum;
	sum=A+B+C+D;
	return sum;
}
int main(){
	float F1,F2,F3,F4, MEAN, SUMC, MIN;
	printf("Enter 4 numbers\n ");
	scanf("%f %f %f %f", &F1,&F2,&F3,&F4);
	// Function call
	MIN = minFOUR(F1,F2,F3,F4);
	printf("the minimum value is %f\n",MIN);
	
	SUMC = sumFOUR(F1,F2,F3,F4);
	printf("The sum of all is %f\n",SUMC);
	
	MEAN = sumFOUR(F1,F2,F3,F4)/4;
	printf(" The mean is %f\n",MEAN);
	
	return 0;
}
