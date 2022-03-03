#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	int *b;
	clrscr();
	printf("\nA=%d",a);

	b=&a;
	printf("\nB=%x",b);   	 //%x is used for HexaDecimal Memory Location
	printf("\nValue at B=%d",*b);

	++a;
	printf("\nA=%d",a);
	++(*b);
	printf("\nA=%d",a);

	getch();
}