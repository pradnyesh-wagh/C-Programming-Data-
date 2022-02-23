#include<stdio.h>
#include<conio.h>
void main()
{
	char input,output;
	int iploc,oploc,charloc;
	clrscr();

	scanf("%c",&input);
	scanf("%d",&iploc);

	if(iploc>26)
	{
		iploc = iploc - 26;

	}

	charloc = input;
	oploc = charloc;
	printf("%d",oploc);

	getch();
}