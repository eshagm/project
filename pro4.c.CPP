#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	float BS,HRA,DA,TA,GS;
	printf("Enter BS=");
	scanf("%f",&BS);
	printf("Enter HRA=");
	scanf("%f",&HRA);
	HRA=BS*HRA/100;
	printf("Enter DA=");
	scanf("%f",&DA);
	DA=BS*DA/100;
	printf("Enter TA=");
	scanf("%f",&TA);
	TA=BS*TA/100;
	GS=BS+HRA+DA+TA;
	printf("GS answer=%f",GS);


	getch();
}                  