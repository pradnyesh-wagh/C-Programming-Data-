#include<stdio.h>
#include<conio.h>
void main()
{
	int n=153,r,cube=0,sum=0,temp=0;
	clrscr();
	temp=n;
	while(n>0)
	{
		r=n%10;
		cube = r*r*r;
		sum = sum+cube;
		n = n/10;
	}
	if(sum == temp)
	{
		printf("\nNumber Is ArmStrong");
	}
	else
	{
		printf("\nNumber Is Not ArmStrong");
	}
	getch();
}
