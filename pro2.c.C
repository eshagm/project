#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	float a,b,c;
	printf("the numberA=");
	scanf("%f",&a);
	printf("the numberB=");
	scanf("%f",&b);
	c=a;
	a=b;
	b=c;
	printf("swapping the numberA=%f",a);
	printf("\nswapping the numberB=%f",b);
	getch();
}