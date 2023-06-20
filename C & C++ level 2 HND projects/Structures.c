#include<stdio.h>
struct subject{
	char sub_Name[15];
	float sub_Mark;
	int sub_Coef;
};
struct student{
	char stud_Name[15];
	int Num_subj;
};

int main(){
	struct subject Sub;
	struct student Stud;
	
	printf("Enter Your Name\n");
	scanf("%c",&Stud.stud_Name);
	
	printf("Enter Number of subject offered\n");
	scanf("%d",&Stud.Num_subj);

	printf("Enter 1st Subject name\n ");
	scanf("%c",Sub.sub_Name);
	
	printf("Enter coef\n");
	scanf("%d",Sub.sub_Coef);

}
