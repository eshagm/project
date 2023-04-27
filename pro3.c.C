#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	float c,fah;
	printf("cel tem=");
	scanf("%f",&c);
	fah=c*9/5+32;
	printf("cel to fah=%f",fah);
	getch();
}