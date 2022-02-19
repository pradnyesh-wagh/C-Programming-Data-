#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,c=0,level,i;
	clrscr();
	printf("\nEnter the Level=");
	scanf("%d",&level);

	printf("\n%d \n%d",a,b);

	for(i=1;i<=level;i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
	}

	getch();
}